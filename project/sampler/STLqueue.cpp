// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include "re_input.h" //トンネル型待ち行列
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    // キューに要素を追加
    q.push(10);
    q.push(20);
    q.push(30);

    // キューから要素を取り出し
    while (!q.empty()) {
        cout << q.front() << " "; //先頭要素を出力
        q.pop();                    //先頭要素を削除
    }
    cout << endl;
}