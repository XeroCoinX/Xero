AC_DEFUN([CHECK_FILESYSTEM], [
  AC_MSG_CHECKING([whether std::filesystem can be used without link library])
  AC_LINK_IFELSE([
    AC_LANG_PROGRAM([[#include <filesystem>]], [[std::filesystem::path p{"."}; (void)p;]])
  ], [
    AC_MSG_RESULT([yes])
  ], [
    AC_MSG_RESULT([no])
    AC_MSG_CHECKING([whether std::filesystem needs -lstdc++fs])
    TEMP_LIBS="$LIBS"
    LIBS="$LIBS -lstdc++fs"
    AC_LINK_IFELSE([
      AC_LANG_PROGRAM([[#include <filesystem>]], [[std::filesystem::path p{"."}; (void)p;]])
    ], [
      AC_MSG_RESULT([yes])
    ], [
      AC_MSG_RESULT([no])
      LIBS="$TEMP_LIBS"
    ])
  ])
])
