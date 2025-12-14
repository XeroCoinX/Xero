#!/usr/bin/env bash
set -euo pipefail

VER="$(sed -n 's/^AC_INIT(\[[^]]*\], *\[\([^]]*\)\].*/\1/p' configure.ac | head -n1)"
[ -n "$VER" ] || VER="win64"

OUT="xero-${VER}-win64"
rm -rf dist_win
mkdir -p "dist_win/${OUT}"

# Require xero-qt.exe to exist
if [ ! -f src/qt/xero-qt.exe ]; then
  echo "ERROR: src/qt/xero-qt.exe not found. Build Windows first."
  echo "Tip:"
  echo "  make clean || true"
  echo "  ./autogen.sh"
  echo "  HOST=x86_64-w64-mingw32 PREFIX=\$PWD/depends/x86_64-w64-mingw32 \\"
  echo "    CONFIG_SITE=\$PREFIX/share/config.site ./configure --host=\$HOST --prefix=\$PREFIX --with-gui=qt5 --without-miniupnpc --disable-tests --disable-bench"
  echo "  make -j\$(nproc)"
  exit 1
fi

# Copy EXEs (whatever exists)
cp -f src/qt/xero-qt.exe  "dist_win/${OUT}/"
cp -f src/xerod.exe       "dist_win/${OUT}/" 2>/dev/null || true
cp -f src/xero-cli.exe    "dist_win/${OUT}/" 2>/dev/null || true
cp -f src/xero-tx.exe     "dist_win/${OUT}/" 2>/dev/null || true
cp -f src/xero-wallet.exe "dist_win/${OUT}/" 2>/dev/null || true
cp -f src/xero-util.exe   "dist_win/${OUT}/" 2>/dev/null || true

HOST=x86_64-w64-mingw32
PREFIX="$PWD/depends/$HOST"

# Try to include qwindows.dll if it exists (dynamic Qt case)
QWIN="$(find "$PREFIX" -type f \( -name qwindows.dll -o -name qwindowsd.dll \) 2>/dev/null | head -n1 || true)"
if [ -n "$QWIN" ]; then
  mkdir -p "dist_win/${OUT}/platforms"
  cp -f "$QWIN" "dist_win/${OUT}/platforms/"
else
  # If static plugin libs exist, that's fine (no platforms/ folder needed)
  if find "$PREFIX" -type f -iname "*qwindows*.*a" 2>/dev/null | head -n1 | grep -q .; then
    echo "NOTE: qwindows platform appears to be static in depends (no qwindows.dll). Continuing..."
  else
    echo "WARNING: qwindows.dll not found. If xero-qt.exe fails on Windows, we’ll need to adjust Qt build."
  fi
fi

# Optional plugins (only if present)
mkdir -p "dist_win/${OUT}/styles" "dist_win/${OUT}/imageformats"
find "$PREFIX" -type f -path "*/plugins/styles/*.dll" -exec cp -f {} "dist_win/${OUT}/styles/" \; 2>/dev/null || true
find "$PREFIX" -type f -path "*/plugins/imageformats/*.dll" -exec cp -f {} "dist_win/${OUT}/imageformats/" \; 2>/dev/null || true

# Copy required runtime DLLs (Qt DLLs, libstdc++, libgcc, etc.) recursively
need_dlls() { x86_64-w64-mingw32-objdump -p "$1" | awk '/DLL Name/ {print $3}'; }

copy_dll() {
  local dll="$1"
  if [ -f "$PREFIX/bin/$dll" ]; then cp -f "$PREFIX/bin/$dll" "dist_win/${OUT}/"; return 0; fi
  local sys
  sys="$(x86_64-w64-mingw32-gcc -print-sysroot 2>/dev/null)/mingw/bin/$dll"
  if [ -f "$sys" ]; then cp -f "$sys" "dist_win/${OUT}/"; return 0; fi
  return 1
}

changed=1
while [ $changed -eq 1 ]; do
  changed=0
  for bin in dist_win/${OUT}/*.exe dist_win/${OUT}/platforms/*.dll dist_win/${OUT}/styles/*.dll dist_win/${OUT}/imageformats/*.dll; do
    [ -f "$bin" ] || continue
    while read -r dll; do
      case "$dll" in
        KERNEL32.dll|USER32.dll|GDI32.dll|SHELL32.dll|ADVAPI32.dll|WS2_32.dll|OLE32.dll|COMDLG32.dll|COMCTL32.dll|IMM32.dll|WINMM.dll|CRYPT32.dll|IPHLPAPI.dll|NETAPI32.dll|SHLWAPI.dll|MSVCRT.dll|VERSION.dll|SETUPAPI.dll|OLEAUT32.dll|WLDAP32.dll|DNSAPI.dll) continue ;;
      esac
      if [ ! -f "dist_win/${OUT}/$dll" ]; then
        copy_dll "$dll" && changed=1 || true
      fi
    done < <(need_dlls "$bin")
  done
done

( cd dist_win && zip -r "../${OUT}.zip" "${OUT}" >/dev/null )
sha256sum "${OUT}.zip" > "${OUT}.zip.sha256"
ls -la "${OUT}.zip" "${OUT}.zip.sha256"
