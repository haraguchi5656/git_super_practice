// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include "re_input.h"
#include <vector>

#include <algorithm>
using namespace std;

int main(){

//整列　大きい順に並び変える
//ベクトル
    vector<int> array;
    int data;
    for (int i = 0; i < 5; i++) {
        cout << "数値を5つ入力してください: ";
        data = re_input<int>();
        array.push_back(data);
    }
    cout << "入力した数は以下です: ";
    for (int num : array) { //コンテナ用の特殊ループ構文
        cout << num << " ";
    }
    cout << endl;

    //並び替えを行う
    sort(array.begin(), array.end(), greater<int>());//less<int>()なら小さい順の措定
    cout << "ソート結果（大きい順）: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

return 0;
}