#include <iostream>
using namespace std;

template <class T> //どんなデータ型も受け入れるテンプレ関数の宣言
T nibai(T x) {
    x *= 2;
    return x;
}

template <class T1, class T2>//関数テンプレートの引数２つバージョン
auto comp(T1 x, T2 y) {
    return x + y;
}

template <class K>
class sankaku {
public:
    K teihen;
    K takasa;
    sankaku(K x, K y) {
        teihen = x;
        takasa = y;
    }
    K keisan() {
        return teihen * takasa / 2;
    }
};//クラス定義のあとは；

int main() {
    cout << nibai(4) << endl;
    cout << comp(4, 2.54) << endl;
    sankaku<int> choudo(10, 20);
    sankaku<double> hanpa(10.00, 10.00);
    cout << "int型の三角形の面積:" << choudo.keisan() << "\n";
    cout << "double型の三角形の面積:" << hanpa.keisan() << "\n";
    return 0;
}

// インクルードとusingディレクティブ：
// 必要なヘッダーファイル <iostream> がインクルードされており、using namespace std; が使用されています。

// テンプレート関数 nibai：
// テンプレートパラメータ T を使用して、任意のデータ型に対応しています。

// テンプレート関数 comp：
// 2つのテンプレートパラメータ T1 と T2 を使用し、異なる型の引数を受け取ることができます。

// クラステンプレート sankaku：
// テンプレートパラメータ K を使用して、任意のデータ型に対応しています。
// メンバ変数 teihen と takasa、コンストラクタ、メンバ関数 keisan() が適切に定義されています。

// main 関数：
// nibai と comp 関数の呼び出しは正しく行われています。
// sankaku クラステンプレートのインスタンス化も適切に行われています。
// 出力ステートメントでは、改行文字 "\n" が正しく使用されています。