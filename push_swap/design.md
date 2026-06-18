# push_swap design memo

## Goal
- push_swapを二人で実装する
- 共通のstack設計と操作関数を先に固める

## Stack
- t_stack は data と size を持つ
- data は int配列
- top は data[size - 1]
- A/Bは入力個数nぶんmallocする

## Operations
- sa/sb/pa/pb/ra/rra などを関数化する
- 操作関数はstack状態を変更する
- 操作関数は命令名を出力する

## Parse/Error
- 引数をintに変換する
- int範囲外を弾く
- 重複を弾く
- エラー時はErrorを出す
- 確保済みメモリをfreeする

## Strategies
- simple: O(n^2)
- medium: O(n√n)
- complex: O(n log n)
- adaptive: disorderで切り替える

## Git
- mainに直接pushしない
- feature branchで作業
- merge前にmake/norminette