#include <iostream>
using namespace std;

class Student{
    
    protected:
    int num;
    int year;

    public:
    Student();
    Student(int a);
    Student(const Student &obj);
    ~Student();
    void set_num_year(int *a, int *b){
        num = *a;
        year = *b;
    }
    void get_num_year(int *a, int *b){
        *a = num;
        *b = year;
    }
    void show(){
        cout << num << "\n";
        cout << year << "\n";
    }
};


Student::Student(){
    cout << "コンストラクタ発動 初期設定を行います" << "\n";
    num =10;
    year = 15;
}
Student::Student(int a){
    cout << "引数付きコンストラクタ発動 初期設定を行います" << "\n";
    num =10+a;
    year = 15+a;
}
Student::~Student(){
    cout << "デストラクタ発動  終了処理を行います" << "\n";
}
Student::Student(const Student &obj){   //継承クラスでも起動するコンストラクタ
    cout << "コピーコンストラクタ発動  初期設定を行います" << "\n";
    num = obj.num;              //objの示す先は初期型のStudent
    year = obj.year;
}

int main(){
    int a,b;
    cout << "aの値を入力してください: ";
    cin >> a;
    cout << "bの値を入力してください: ";
    cin >> b;
    Student Yamada;
    Yamada.set_num_year(&a,&b);
    Student Tanaka = Yamada;
    Yamada.show();
    Tanaka.show();
    return 0;
}

