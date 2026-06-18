# ================================================================  
Rush02 チーム実装仕様書  
数値 → 英語変換プログラム  
  
-----  
  
1. 共通の構造体（最初に全員で合意する）  
  
-----  
  
typedef struct s_dict  
{  
char            *key;  
char            *value;  
struct s_dict   *next;  
}   t_dict;  
  
これが全関数の共通言語。実装開始前に全員で確認する。  
  
-----  
  
1. main の全体像  
  
-----  
  
1. argcで引数の数を確認  
   └── 2・3個以外 → “Error\n” を出力して終了  
1. 数値のバリデーション  
   └── 数字以外の文字がある  → “Error\n”  
   └── 先頭に余分な0がある   → “Error\n”（“0”単体はOK）  
1. parse_dict(ファイル名)  
   └── argc == 2 → parse_dict(“numbers.dict”)  
   └── argc == 3 → parse_dict(argv[1])  
   └── NULLが返る → “Error\n”  
1. convert_number(数値文字列, dict)  
   └── NULLが返る → “Dict Error\n”  
1. writeで出力（末尾に\n）  
1. dictを全部freeして終了  
  
-----  
  
1. 関数一覧とシグネチャ  
  
-----  
  
— 課題指定の関数 —  
  
t_dict  *parse_dict(char *filename);  
役割：辞書ファイルを開いてt_dictのリストを作る  
引数：ファイル名の文字列  
返値：リストの先頭ポインタ。エラー時はNULL  
  
char    *dict_get(t_dict *dict, char *key);  
役割：keyに対応するvalueのポインタを返す  
（コピーはしない。parse_dict内でmallocしたものを参照）  
引数：dictの先頭ポインタ、検索するキー文字列  
返値：valueへのポインタ。未存在時はNULL  
  
char    *convert_3digits(int n, t_dict *dict);  
役割：0〜999の整数を英語文字列に変換  
引数：変換する整数、dictの先頭ポインタ  
返値：mallocした英語文字列。n==0の時は””  
  
char    **split_blocks(char *num_str, int *count);  
役割：数値文字列を右から3桁ずつ分割  
引数：数値文字列、ブロック数を格納するポインタ  
返値：文字列の配列（index 0が最下位ブロック）  
  
char    *get_scale_word(int index, t_dict *dict);  
役割：indexに対応するスケール語を辞書から引く  
引数：index（0=thousand, 1=million, …）、dict  
※ split_blocksのindexより1小さい値を渡す  
split index 1 → get_scale_word(0) → “thousand”  
split index 2 → get_scale_word(1) → “million”  
返値：スケール語へのポインタ。未存在時はNULL  
  
char    *convert_number(char *num_str, t_dict *dict);  
役割：数値文字列全体を英語に変換するメイン関数  
引数：数値文字列、dictの先頭ポインタ  
返値：mallocした英語文字列。エラー時はNULL  
  
char    *str_join(char *a, char *b);  
役割：aとbをスペース区切りで結合  
引数：結合する2つの文字列  
返値：mallocした結合後の文字列  
  
— ユーティリティ関数 —  
  
ft_strlen    // 文字列長  
ft_strncmp   // 文字列比較（dict_getで使う）  
ft_itoa_key  // 整数→文字列（100以下のみ対応でOK）  
ft_trim      // 前後スペース・\n削除（parse_dictで使う）  
ft_read_line // ファイルから1行読む（parse_dictで使う）  
  
-----  
  
1. データの流れ  
  
-----  
  
“1234567”  
↓ split_blocks  
[“567”, “234”, “1”]   ← index 0, 1, 2  
  
↓ convert_3digits  
index 0 → “five hundred sixty seven”  
index 1 → “two hundred thirty four”  
index 2 → “one”  
  
↓ get_scale_word（split indexより1小さい値を渡す）  
index 0 → スケールなし  
index 1 → get_scale_word(0) → “thousand”  
index 2 → get_scale_word(1) → “million”  
  
↓ str_join で上位から結合  
“one million two hundred thirty four thousand five hundred sixty seven”  
  
-----  
  
1. convert_3digits の分岐ルール  
  
-----  
  
0〜999の整数を英語に変換する。  
  
例：567の場合  
567 / 100 = 5   → dict_get(dict, “5”)   = “five”  
dict_get(dict, “100”) = “hundred”  
→ “five hundred”  
567 % 100 = 67  
67 / 10 * 10 = 60 → dict_get(dict, “60”) = “sixty”  
67 % 10 = 7       → dict_get(dict, “7”)  = “seven”  
→ “sixty seven”  
結果 → “five hundred sixty seven”  
  
分岐まとめ：  
n == 0              → “” を返す  
n >= 100            → 百の位を処理してから残りへ  
10 <= n%100 <= 19   → dict[n%100] を直接引く（eleven〜nineteen）  
n%100 >= 20         → 十の位と一の位に分解  
一の位のみ          → dict[n%10]  
  
注意：  
一の位が0のとき（例: 40, 200）は一の位を出力しない  
n==0の時は”” を返す。スキップ処理はconvert_number側で行う  
  
-----  
  
1. convert_number のブロックスキップルール  
  
-----  
  
split_blocksで分割した後、ブロックが0の場合は  
convert_3digitsの結果もスケールもスキップする。  
  
例：“1000007”  
split_blocks → [“007”, “000”, “1”]  
  
index 0 → 7   → “seven”      スケールなし  
index 1 → 0   → スキップ     （“thousand”も付けない）  
index 2 → 1   → “one”        + get_scale_word(1) = “million”  
  
結果 → “one million seven”  
※ “one million thousand seven” にならないように注意  
  
-----  
  
1. get_scale_word のスケールテーブル  
  
-----  
  
内部にキー文字列のテーブルを持つ。  
  
index 0  → dict[“1000”]                                      = thousand  
index 1  → dict[“1000000”]                                   = million  
index 2  → dict[“1000000000”]                                = billion  
index 3  → dict[“1000000000000”]                             = trillion  
index 4  → dict[“1000000000000000”]                          = quadrillion  
index 5  → dict[“1000000000000000000”]                       = quintillion  
index 6  → dict[“1000000000000000000000”]                    = sextillion  
index 7  → dict[“1000000000000000000000000”]                 = septillion  
index 8  → dict[“1000000000000000000000000000”]              = octillion  
index 9  → dict[“1000000000000000000000000000000”]           = nonillion  
index 10 → dict[“1000000000000000000000000000000000”]        = decillion  
index 11 → dict[“1000000000000000000000000000000000000”]     = undecillion  
  
-----  
  
1. parse_dict の処理イメージ  
  
-----  
  
ファイルの1行 “1000: thousand\n” を処理する場合：  
  
1. コロンを探す → インデックス i  
1. line[0] 〜 line[i-1] をtrimしたものがkey   → “1000”  
1. line[i+1]以降をtrimしたものがvalue          → “thousand”  
1. mallocでt_dictを1個作る  
1. keyをmallocしてコピー  
1. valueをmallocしてコピー  
   （ローカルバッファが消えてもアクセスできるようにするため）  
1. リストの末尾につなげる  
1. 次の行へ  
  
注意：  
空行は無視する  
コロンがない行はDict Error  
ファイルが開けない場合はNULLを返す  
  
-----  
  
1. エラー処理一覧  
  
-----  
  
状況                              出力  
  
-----  
  
引数の数が不正                    Error\n  
数値に無効な文字（小数点など）    Error\n  
先頭に余分な0がある（“007”など）  Error\n  
ファイルが開けない                Error\n  
辞書のフォーマットが不正          Dict Error\n  
辞書に必須キーが不足              Dict Error\n  
辞書で変換できない数値            Dict Error\n  
  
重要：“Error” と “Dict Error” は明確に区別する。  
引数の検証は辞書読み込みより先に行うこと。  
  
-----  
  
1. メモリ管理ルール  
  
-----  
  
- parse_dictでmallocしたkey・valueは最後に全部freeする  
- dict_getはvalueのポインタを返すだけ（コピー・freeしない）  
- str_joinの戻り値は使用後にfreeする  
- split_blocksの戻り値は各要素と配列本体を両方freeする  
- プログラム終了前に全mallocをfreeする（評価時に確認される）  
  
-----  
  
1. 分担案  
  
-----  
  
担当A：  
convert_3digits, get_scale_word, split_blocks  
  
担当B：  
parse_dict, dict_get, str_join  
  
担当C：  
main（引数チェック・エラー処理・出力）  
ft_itoa_key, ft_trim, ft_read_line  
  
最初の1時間：  
全員でヘッダファイルとt_dict構造体だけ書く  
→ これが揃えば並行作業できる  
  
-----  
  
1. 出力例  
  
-----  
  
$> ./rush-02 42  
forty two  
  
$> ./rush-02 0  
zero  
  
$> ./rush-02 100000  
one hundred thousand  
  
$> ./rush-02 10.4  
Error  
  
$> ./rush-02 numbers.dict 1000000000000  
one trillion  
  
$> ./rush-02 1000007  
one million seven  
  
================================================================  
