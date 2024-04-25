// Standard Template Library (STL) - 標準テンプレートライブラリ
// コンテナ、イテレータ、アルゴリズム
#include <iostream>    // 入出力
#include "re_input.h" 
#include <vector>      //値と次へのポインタを１セットとする

using namespace std;

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



//コンテナ用ポインタ　＝　イテレータを用いた出力
    cout << "イテレータを用いた出力：" << endl;

    vector<int>::iterator it = array.begin();//開始位置のポインタ
    while(it != array.end()){//終端位置のポインタまで繰り返す
        cout << *it << " / ";
        it++;
    }
    cout << "\n";

}
