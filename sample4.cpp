//Standard Template Livrary　STL
//標準テンプレートライブラリ
//コンテナ　イテレータ　アルゴリズム


#include <iostream> //入出力
#include <type_traits> //is_same():型が同じか判定するテンプレ関数
#include <limits> //numeric_limitsのため
#include <vector>// コンテナとは　ベクトルマップ　キュー　スタック
#include <map>  //イテレータとは コンテナ用のポインタ
#include <queue>
#include <stack>
#include <algorithm>//アルゴリズムとは　ソート　探索　整列などの処理
using namespace std;

template <typename T>
T re_input();



int main(){
    int i;
    int num;

    vector<int> array;
    cout << "要素数を決めてください。" << endl;
    num = re_input<int>();

    for(i=0; i < num; i++){
        int data;
        cout << num << "個中" << i << "番目のvectorデータ:";
        data = re_input<int>();
        array.push_back(data);
    }
    cout << "入力したvectorデータは以下です" << endl;
    for(i=0; i<num; i++){
        cout << array[i] << ":";
    }
    cout << "\n";

return 0;

}


template <typename T>
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