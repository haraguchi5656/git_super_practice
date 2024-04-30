#include <string>
#include <iostream>
using namespace std;

class NewClass{
    
    public:
    string name;
    int num;

    public:
    NewClass();
    NewClass(int a);
    NewClass(const NewClass &obj);
    ~NewClass();
    void set_name(const string a){
        name = a;
    }
    void set_num(int a){
        num = a;
    }
    void get_num(int &a){     
        a = num;

    }
    void show(){
        cout << name << "\n";
        cout << num << "\n";
    }
};

NewClass::NewClass():name(""),num(0){
    //cout << "コンストラクタ発動 初期設定を行います" << "\n";
}
NewClass::NewClass(int a){
    //cout << "引数付きコンストラクタ発動 初期設定を行います" << "\n";
    name = to_string(a);
    num = a;
}
NewClass::~NewClass(){
    //cout << "デストラクタ発動  終了処理を行います" << "\n";
}
NewClass::NewClass(const NewClass &obj){   //継承クラスでも起動するコンストラクタ
    //cout << "コピーコンストラクタ発動  初期設定を行います" << "\n";
    name = obj.name;
    num = obj.num;              //objの示す先は初期型のNewClass
    cout << "num: " << num << "\n";
}