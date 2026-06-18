# 42 Piscine Vim セットアップガイド

42の学校のMacはデフォルト設定のため、毎回以下の手順でセットアップする。
ホームディレクトリ（`~`）はログアウトしても保持される。

---

## 1. vim-plug インストール（プラグインマネージャー）

```bash
curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
```

---

## 2. .vimrc を作成

```bash
cat > ~/.vimrc << 'EOF'
" vim-plug
call plug#begin('~/.vim/plugged')
Plug 'jiangmiao/auto-pairs'
call plug#end()

syntax on
set number
set tabstop=4
set shiftwidth=4
set autoindent

" 42 Norminette compliance
set noexpandtab          " Use actual tabs, not spaces
set colorcolumn=81       " Highlight column 81 (over 80 char limit)
highlight ColorColumn ctermbg=red guibg=red

" Show trailing whitespace (norm violation)
set list
set listchars=tab:>\ ,trail:·,extends:>,precedes:<

" Highlight lines exceeding 80 chars
augroup NormLength
  autocmd!
  autocmd BufWinEnter *.c,*.h match Error /\%>80v.\+/
augroup END
EOF
```

---

## 3. プラグインをインストール

```bash
vim +PlugInstall +qall
```

これだけで完了。

---

## 導入プラグインと理由

| プラグイン | 機能 | 理由 |
|---|---|---|
| auto-pairs | `{` を打つと `}` が自動補完 | Norm準拠のコードを速く書ける |

---

## Vim 基本操作（Piscineで使う頻度が高いもの）

| コマンド | 動作 |
|---|---|
| `i` | 挿入モード |
| `Esc` | ノーマルモードに戻る |
| `:w` | 保存 |
| `:q` | 終了 |
| `:wq` | 保存して終了 |
| `%` | 対応する括弧にジャンプ |
| `dd` | 行を削除 |
| `yy` | 行をコピー |
| `p` | ペースト |
| `u` | アンドゥ |
| `Ctrl+r` | リドゥ |

---

## Norminette チェック

学校のMacにはnorminetteが入っているはず：

```bash
norminette ファイル名.c
```

エラーがなければ提出OK。
