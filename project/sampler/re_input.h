
#include <iostream>    // 入出力
#include <string>      // 文字列操作
#include <type_traits> // is_same(): 型が同じか判定するテンプレ関数
#include <limits>      // numeric_limits<　>：データの大きさを取得する
                        //インナークラスは前方宣言不可

using namespace std;

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