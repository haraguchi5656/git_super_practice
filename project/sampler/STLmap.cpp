// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include "re_input.h"
#include <map>       //データ同士の紐づけ
using namespace std;

int main(){
    map<string, string> obj;
    obj.insert(make_pair("リンゴ","apple"));
    obj.insert(make_pair("オレンジ","orange"));
    obj.insert(make_pair("バナナ","banana"));
        string word;
        cout << "英語翻訳(リンゴ・オレンジ・バナナ):";
        cin >> word;
        cout << obj[word] << endl; //[string]：int型　→　オーバーロード
                                 //mapのword番目　のように検索をかけている

    return 0;
}
