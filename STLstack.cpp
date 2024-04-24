// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include "re_input.h"
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    // スタックに要素を追加
    s.push(10);
    s.push(20);
    s.push(30);

    // スタックから要素を取り出し
    while (!s.empty()) {
        cout << s.top() << " "; //一番上の要素を出力
        s.pop();                //一番上の要素を削除
    }
    cout << endl;
}