//try　throw　catch　を使用したエラー判定
#include <iostream>
#include "re_input.h"

using namespace std;

// エラーを投げる関数の定義
int judge(int a) throw(string){
    if(a < 0 || a > 150){
        throw string("エラー発生\n");
    }
    else if(x < 20) 
        return 1000;
    else 
        return 2000;
}

int main() {
    try{
        int year;
        cout << "年齢を入力:";
        cin >> year;
        int result = judge(year);
        cout << result << "円です\n";
    } catch(string e) { // エラーを捕捉して表示
        cerr << e;
    }
    return 0;
}
