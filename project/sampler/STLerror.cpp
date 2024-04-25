//try　throw　catch　を使用したエラー判定
#include <iostream>
#include "re_input.h"
#include <cstdlib> // rand(), srand()用の宣言
#include <ctime>   // time()用の宣言


using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // 乱数初期シードを設定
    int num = 0, rand_num = static_cast<int>(rand() % 12 + 1);

    while (true) {
        try {   //
            cout << "数値を入力してください（0～12）\n";
            num = re_input<int>();
            
            if(num == rand_num){
                throw 1.1;
            }
            else if(num >= 0 && num <=12){
                cout << "外れです\n";
                cout << "正解の数値は：" << rand_num << endl;
            }
            else {
                throw 1; //catchへ投げる引数　エラー分をstringで投げるのもあり
            }
                
            break; // エラーがない場合はループを抜ける

        } catch (int e) {        //エラー用の標準クラス
            cerr << "範囲外です" << endl; 
        }
        catch (double e){
            cerr << "当たりです" << endl;
            break;
        }
    }

try {
    string zen;
    cout << "文字列を入力してください: ";
    cin >> zen;
    throw zen; // 文字列オブジェクトを投げる
} catch (...) { // その他の型の例外を捕捉
    cout << "すべてのデータ型を認識可能です:成功" << endl;
}
    return 0;
}

