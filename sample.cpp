#include <iostream>
#include <string>
#include <limits>
#include "NewClass.h"
using namespace std;

int main() {
    int i = 0;
    int boxsize = 10;
    char next = 'y';
    NewClass Students[boxsize];

    // 初期化: 全ての生徒の番号を0に、名前を"未定義です"に設定
    while (i < boxsize) {
        Students[i].num = 0;
        Students[i].name = "未定義です";
        i++;
    }

    if (next == 'y') {
        i = 0;
        while (next == 'y' && i < boxsize) {
            cout << i + 1 << " 人目の番号を記述:" << flush;

            // 番号の入力: 整数以外の入力があった場合はエラーメッセージを表示し、再入力を促す
            while (true) {
                if (cin >> Students[i].num) {
                    break;
                } else {
                    cout << "整数を入力してください:" << flush;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            cout << "名前を記述:";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // 名前の入力: 入力がない場合はエラーメッセージを表示し、再入力を促す
            while (true) {
                if (getline(cin, Students[i].name)) {
                    break;
                } else {
                    cout << "正確に生徒名を入力してください：" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

            cout << "次の生徒はいますか y/n: ";

            // 次の生徒の有無の入力: 'y'または'n'以外の入力があった場合はエラーメッセージを表示し、再入力を促す
            do {
                cin >> next;
                if (cin.fail() || (next != 'y' && next != 'n')) {
                    cout << "y または n を入力してください:" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    break;
                }
            } while (true);

            i++;
        }
    }

    // 入力された生徒の番号と名前を出力
    for (i = 0; i < boxsize; i++) {
        cout << "番号:" << Students[i].num << " " << "名前:" << Students[i].name << "\n";
    }

    return 0;
}