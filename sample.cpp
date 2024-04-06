#include <iostream>
using namespace std;

class Student{
    
    protected:
    char name[20];
    int num;
    int year;

    public:
    Student();
    Student(int a);
    Student(const Student &obj);
    ~Student();
    void set_name(char *a){
        name = *a;
    }
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
    num = 0;
    year = 0;
}
Student::Student(int a){
    cout << "引数付きコンストラクタ発動 初期設定を行います" << "\n";
    num = a;
    year = a;
}
Student::~Student(){
    cout << "デストラクタ発動  終了処理を行います" << "\n";
}
Student::Student(const Student &obj){   //継承クラスでも起動するコンストラクタ
    cout << "コピーコンストラクタ発動  初期設定を行います" << "\n";
    num = obj.num;              //objの示す先は初期型のStudent
    year = obj.year;
    cout << "num: " << num << "\n";
    cout << "year: " << year << "\n";
}

int main(){
    Student List[50];
    char tmp_name[20];
    int tmp_num;
    int tmp_year;
    for(int i=0,i<50,i++){
        if{List[i].num ==}
        List[i].set_name();
    }
    return 0;
}

