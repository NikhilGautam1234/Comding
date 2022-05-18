// #include "iostream"
// #include "fstream"
// using namespace std;

// class shibu
// {
// public:
//     string name;
//     int age, rollno;
//     void get()
//     {
//         cout << "Enter your name: ";
//         cin >> name;
//         cout << "Enter your age: ";
//         cin >> age;
//         cout << "Enter your RollNo: ";
//         cin >> rollno;
//     }
//     void show(){
//         cout << name << "\t" << age << "\t" << rollno << endl;
//     }
// };

// int main()
// {
//     shibu f;
//     cout << endl;
//     fstream file;
//     file.open("Sanji",ios::in);

//     if (!file)
//     {
//         cout << "File is not created" << endl;
//         return 0;
//     }

//     cout << "File created!!!!" << endl;
//     f.get();
//     file.write((char *)&f, sizeof(f));
//     file.close();
//     cout << "File saved and closed!!!!" << endl;
//     file.open("Sanji", ios::out);
//     file.read((char *)&f, sizeof(f));
//     f.show();
//     file.close();
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;

class luffy{
    int code;
    string name;
    public:
    void inp(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter the code: ";
        cin>>code;
    }
    void oup(){
        cout<<"Name: "<<name<<"\nCode: "<<code<<endl;
    }
};


int main(void){
    cout<<
}