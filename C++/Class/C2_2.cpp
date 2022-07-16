#include <bits/stdc++.h>
using namespace std;

class Employee
{
    char name[30];
    int age;
    char des[10];
    long long salary;

public:
    void in();
    void out();
};

void
Employee ::in()
{
    cout << "Enter Employee Name : ";
    cin >> name;
    cout << "Enter Employee Age : ";
    cin >> age;
    cout << "Enter Employee Designation: ";
    cin >> des;
    cout << "Enter Employee Salary : ";
    cin >> salary;
    cout << "\n";
}

void Employee ::out()
{
    cout << "Enter Employee Name : " << name << endl;
    cout << "Enter Employee Age : " << age << endl;
    cout << "Enter Employee Designation: " << des << endl;
    cout << "Enter Employee Salary : " << salary << endl;
    cout << "\n";
}

int main(){
    Employee a[2];
    cout<<"\n\tNikhil\n\t21BCS9434\n";
    for (int i = 0; i < 2; i++)
    {
        a[i].in();
    }
    for (int i = 0; i < 2; i++)
    {
        a[i].out();
    }
    
    return 0;
}