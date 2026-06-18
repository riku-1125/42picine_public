# Born2beRoot 練習 1周目



環境:

- Windows に Oracle VirtualBox をインストール

- Debian 13 netinst ISO を使用

- VM名: Born2beRoot

- メモリ: 2048MB

- CPU: 1

- ディスク: 20GB

- OS: Debian 13 Trixie 64-bit

- GUIなしでインストール



インストール時:

- Language: English

- Location: Japan

- Keyboard: Japanese

- Hostname: rnishiba42

- Domain name: 空欄

- rootユーザー作成

- 一般ユーザー: rnishiba

- パーティション:

&#x20; Guided - use entire disk and set up encrypted LVM

&#x20; Separate /home partition

- Software selection:

&#x20; Debian desktop environment は外す

&#x20; GNOME も外す

&#x20; SSH server は入れる

&#x20; standard system utilities は入れる

- GRUB は /dev/sda に入れる



# ディスク構成

sda

├─sda1        /boot

├─sda2        MBR/extended系の枠

└─sda5        暗号化領域

&#x20; └─sda5\_crypt

&#x20;   ├─root    /

&#x20;   ├─swap    \[SWAP]

&#x20;   └─home    /home



# 設定したもの



sudo:

- sudo を apt install sudo でインストール

- user42 グループ作成

- rnishiba を sudo と user42 に追加



SSH:

- /etc/ssh/sshd\_config を編集

- Port 4242

- PermitRootLogin no

- systemctl restart ssh

- ss -tuln | grep 4242 で確認



UFW:

- apt install ufw

- ufw allow 4242

- ufw enable

- ufw status

- 4242だけALLOWを確認



VirtualBox NAT:

- ポートフォワーディング設定

- ホストIP: 127.0.0.1

- ホストポート: 4242

- ゲストポート: 4242



Windows PowerShell:

- ssh rnishiba@127.0.0.1 -p 4242

- 接続成功

- ssh root@127.0.0.1 -p 4242

- Permission denied で成功



# 触った概念

VM = 仮想マシン

VDI = VirtualBoxの仮想ディスク本体

SHA-1 = 仮想ディスクの指紋

LVM = ディスクを柔軟に分ける仕組み

暗号化 = ディスクを読めない形で保存する

復号 = パスフレーズで読める状態に戻す

root = 最強管理者

sudo = 一般ユーザーが一時的に管理者権限を借りる仕組み

group = 権限管理の単位

SSH = 遠隔からサーバーに安全にログインする仕組み

UFW = firewallを簡単に操作する道具

NAT = VMがホストPCのネットを間借りする方式

127.0.0.1 = 自分自身、今回はWindows側の入口

ポートフォワーディング = Windowsの4242番をDebian VMの4242番へ転送する設定



# No Touch

残り必須:

- パスワードポリシー

- sudoの厳格設定

- monitoring.sh

- cronで10分ごとにwall表示

- README.md

- signature.txt

- 評価用説明準備

