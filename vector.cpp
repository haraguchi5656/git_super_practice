// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include <type_traits> // is_same(): 型が同じか判定するテンプレ関数
#include <limits>      // numeric_limitsのため
#include <vector>      // コンテナ: ベクトル、マップ、キュー、スタック
#include <map>         // イテレータ: コンテナ用のポインタ
#include <queue>
#include <stack>
#include <algorithm>   // アルゴリズム: ソート、探索、整列などの処理

using namespace std;
template <typename T> // テンプレ関数 可変型のT
T re_input();

int main() {
    int i;
    int num;
    vector<int> array; // int型のベクター作成

    cout << "要素数を決めてください。" << endl;
    num = re_input<int>(); // int指定してテンプレ関数を呼ぶ

    for (i = 0; i < num; i++) {
        int data;
        cout << num << "個中" << i << "番目のvectorデータ:";
        data = re_input<int>();
        array.push_back(data);    //ベクトルクラスが持つ出力関数
    }

    cout << "入力したvectorデータは以下です" << endl;
    cout << "for文を用いた出力:" << endl;

    for (i = 0; i < num; i++) {
        cout << array[i] << " : ";
    }
    cout << "\n";



//イテレータを用いた出力
    cout << "イテレータを用いた出力：" << endl;

    vector<int>::iterator it = array.begin();//開始位置のポインタ
    while(it != array.end()){//終端位置のポインタまで繰り返す
        cout << *it << " / ";
        it++;
    }
    cout << "\n";

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