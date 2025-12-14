XeroCoin Core (XRO)
==================
<div align="center">
![XeroCoin Logo](xerocoin.png)
</div>

XeroCoin Core is the reference implementation for the XeroCoin network (XRO) — a lightweight, SHA-256 Proof-of-Work blockchain built for secure, transparent transactions and straightforward infrastructure integration.

- Website: https://temp-website.xerocoinexplorer.com/
- Explorer: https://xerocoinexplorer.com/
- GitHub: https://github.com/XeroCoinX/Xero
- Discord: https://discord.gg/qDbBFh92ZT

What is XeroCoin?
-----------------
XeroCoin is a decentralized, open-source cryptocurrency designed for efficient digital transactions with predictable tokenomics and a clean integration path for services like wallets, pools, explorers, and exchanges.

XeroCoin Core includes:
- Full node (validates blocks + transactions)
- Wallet
- Optional graphical user interface (Qt)

Quick Facts
-----------
- 10-minute blocks
- 5000-block halving interval
- 20-block coinbase maturity
- 6 recommended confirmations

Network Parameters
------------------
- Total Supply: 100,000 XRO (max)
- Initial Block Reward: 10 XRO
- Halving Interval: 5000 blocks
- Mining Algorithm: SHA-256
- Target Block Time: 10 minutes
- Difficulty Adjustment: 120 minutes
- Coinbase Maturity: 20 blocks
- Recommended Confirmations: 6 blocks
- Address Format: Bech32 (xro...)

Ports (Default)
---------------
- P2P Port: 25170
- RPC Port: 25169

Documentation
-------------
More documentation is available in:
- `doc/` (developer/build notes)
- `test/` (functional tests)
- `src/test/` (unit tests)

Build & Test
------------
Typical flow:
- `./autogen.sh`
- `./configure`
- `make -j$(nproc)`
- `make check` (optional, runs unit tests)

License
-------
XeroCoin Core is released under the terms of the MIT license. See [COPYING](COPYING).
