#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int age;
    long long sal;
    string name, des;

public:
    void inp()
    {
        cout<<"\nEnter the details of Employee :-"<<endl;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
        cout << "Enter the designation: ";
        cin >> des;
        cout << "Enter the salary: ";
        cin >> sal;
    }
    void oup()
    {
        cout << "\nName: " << name << "\nAge: " << age << "\nDesignation: " << des << "\nSalary: " << sal << endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of employee: ";
    cin>>n;
    Employee A[n];
    for(int i=0;i<n;i++) A[i].inp();
    for (int i = 0; i < n; i++) A[i].oup();
    
    return 0;
}