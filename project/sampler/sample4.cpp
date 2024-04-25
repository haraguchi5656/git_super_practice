// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include <re_input.h>

#include <algorithm>   // アルゴリズム: ソート、探索、整列などの処理

using namespace std;

template <typename T> T re_input();


template <class T> // テンプレクラス 可変型のT　前方宣言は効かない
class tmpClass {
public:
    T teihen, takasa;

    tmpClass(T x, T y) { // コンストラクタ 変数へ値の入力
        teihen = x;
        takasa = y;
    }

    T keisan() { // 計算処理は入出力処理と分けるのが鉄則
        return teihen * takasa / 2;
    }
}; // クラスの最後は；


int main() {
 
    // int、double型を指定してテンプレクラスを呼ぶ
    tmpClass<int> obj1(10, 20);    // 引数２つ コンストラクタで変数に値をセット
    cout << "テンプレートクラスを用いた整数の三角面積：" << obj1.keisan() << endl; // 計算関数で計算させる

    tmpClass<double> obj2(5.5, 2.2);
    cout << "テンプレートクラスを用いた小数の三角面積：" << obj2.keisan() << endl;

    return 0;
}




template <typename T> // テンプレ関数 可変型のT
T re_input() {
    T value;
    while (true) {
        if (is_same<T, int>::value) {
            cout << "整数入力: ";
        } else if (is_same<T, double>::value) {
            cout << "実数入力: ";
        } else if (is_same<T, string>::value) {
            cout << "文字列入力: ";
        } else if (is_same<T, char>::value) {
            cout << "１文字入力: ";
        }
        if (cin >> value) {
            break;
        } else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "無効な入力です。" << flush;
        }
    }
    return value;
}