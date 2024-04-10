#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// 基底クラス Human
class Human {
public:
    string MANs = "人間性";
    virtual void Work() {
        printf("%s\n", "体が資本！");
    }
    Human() {
        printf("%s\n", MANs.c_str());
    }
};

// 基底クラス Mother (仮想継承)
class Mother : public virtual Human {
public:
    virtual void Hello() = 0;  // 純粋仮想関数
    static int DNA1;
    Mother() {
        printf("%d\n", DNA1);
        printf("%s\n", "母の心");
    }
};

// 基底クラス Father (仮想継承)
class Father : public virtual Human {
public:
    static int DNA2;
    virtual void Work() {
        printf("%s\n", "仕事します！");
    }
    Father() {
        printf("%d\n", DNA2);
        printf("%s\n", "父の眼差し");
    }
};

int Mother::DNA1 = 56;
int Father::DNA2 = 44;

// 派生クラス Child (Father と Mother を多重継承)
class Child : public Father, public Mother {
public:
    int DNA3;
    int num;
    int operator+(int x);  // 演算子のオーバーロード
    void Hello();          // Mother の純粋仮想関数をオーバーライド
    void Work();           // Father の仮想関数をオーバーライド
    friend void show(Child *p);  // フレンド関数の宣言
    Child();
};

// フレンド関数の定義 (クラスの private メンバにアクセス可能)
void show(Child *p) {
    cout << (*p).num << endl;
}

// 演算子のオーバーロード
int Child::operator+(int x) {
    int tmp;
    tmp = num + x;
    return tmp;
}

// Child のコンストラクタ (Father と Mother のコンストラクタを呼び出す)
Child::Child() : Father(), Mother() {
    DNA3 = DNA1 + DNA2;
    printf("%d\n", DNA3);
    printf("%s\n", "やさしさ");
    printf("%s\n", Human::MANs.c_str());
}

// Child の Hello 関数 (Mother の純粋仮想関数をオーバーライド)
void Child::Hello() {
    cout << "やかましい" << endl;
}

// Child の Work 関数 (Father の仮想関数をオーバーライド)
void Child::Work() {
    cout << "仕事いやです！" << endl;
}

// 関数のオーバーロード
void call(int a) {
    cout << "int型ですね" << endl;
}
void call(double a) {
    cout << "double型ですね" << endl;
}

int main() {
    cout << "--- クラスのコンストラクトによる出力 ---" << endl;
    Child Satoshi;
    cout << endl;
    Father Daigorou;
    cout << endl;

    cout << "--- 仮想関数のオーバーライド ---" << endl;
    Daigorou.Work();
    cout << endl;
    Satoshi.Work();
    cout << endl;

    cout << "--- 純粋仮想関数のオーバーライド ---" << endl;
    Satoshi.Hello();
    cout << endl;

    int a = 1, b = 2;
    string asd;
    asd = "これこれ";

    cout << asd << endl;
    cout << a << endl;
    cout << b << endl;

    cout << "--- 関数のオーバーロード ---" << endl;
    call(1);
    call(1.0);
    cout << endl;

    cout << "--- 仮想継承 ---" << endl;
    Human *p;
    p = &Satoshi;
    (*p).Work();
    cout << endl;

    cout << "--- 演算子のオーバーロード ---" << endl;
    int result;
    Satoshi.num = 10;
    result = Satoshi + 15;
    cout << result << endl;
    cout << endl;

    cout << "--- フレンド関数 ---" << endl;
    show(&Satoshi);

    return 0;
}