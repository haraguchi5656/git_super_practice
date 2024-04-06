#include <iostream>
using namespace std;

class Student{
    
    protected:
    string name;
    int num;
    int year;

    public:
    Student();
    Student(int a);
    Student(const Student &obj);
    ~Student();
    void set_name(const string a){
        name = a;
    }
    void set_num_year(int a, int b){
        num = a;
        year = b;
    }
    void get_num_year(int &a, int &b){     
        a = num;
        b = year;

    }
    void show(){
        cout << name << "\n";
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
    char yorn;
    Student List[50];
    string tmp_name;
    int tmp_num;
    int tmp_year;

    for(int i=0;i<50;i++){

        if(List[i].num == 0){
            cout << "name:";
            cin >> tmp_name;
            cout << "num:";
            cin >> tmp_num;
            cout << "year:";
            cin >> tmp_year;
            List[i].set_name(tmp_name);
            List[i].set_num_year(tmp_num,tmp_year);

            List[i].get_num_year(tmp_num,tmp_year);


        }
        cout << "next？ y/n : ";
        cin >> yorn; 
        if(yorn =='n') break;
    }
    for(int i=0;i<50;i++){
        if(List[i].num != 0){
            List[i].show();
        }
    }
    return 0;
}
