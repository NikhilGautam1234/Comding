#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void in()
    {
        cout << "Enter the ID and name: ";
        cin >> roll >> name;
    }
    void out()
    {
        cout << "\n\nID: " << roll << "\nName: " << name ;
    }
};

class Employee : public Student
{
    string comp;

public:
    void in()
    {
        Student::in();
        cout << "Enter the company name: ";
        cin >> comp;
    }
    void out(){
        Student::out();
        cout<<"\nCompany Name: "<<comp<<endl;
    }
};

class Banking
{
    int acc;
    long balance, deposit, cash, o;

public:
    void entry()
    {
        cout << "Enter account number: ";
        cin >> acc;
        cout << "Enter the balance: ";
        cin >> balance;
    omk:
        cout << "Choose an option:\n 1. Deposit\n 2. Withdrawl\n";
        cin >> o;
        if (o == 1)
        {
            cout << "Enter the amount to deposit: ";
            cin >> deposit;
            balance += deposit;
        }
        else if (o == 2)
        {
            cout << "Enter the amount to withdrawl: ";
            cin >> cash;
            if (cash > balance)
            {
                cout << "Amount Exceeded... Try Again\n";
                goto omk;
            }
        }
        else
        {
            cout << "Invalid choice\n";
            goto omk;
        }
    }
    void out()
    {
        cout << "Account number: " << acc << "\nRemaining Balance: " << balance << endl;
    }
};

class Customer : public Employee, public Banking{};

int main(void)
{
    int prof;
wh:
    cout << "\nChoose what is your proffesion:\n 1.Student\n 2.Employee\n";
    cin >> prof;
    Customer omj;
    if (prof == 1)
    {
        omj.Student::in();
        omj.entry();
        omj.Student::out();
        omj.Banking::out();
    }
    else if (prof == 2)
    {
        omj.Employee::in();
        omj.entry();
        omj.Employee::out();
        omj.Banking::out();
    }
    else
    {
        cout << "Invalid Input....\n";
        goto wh;
    }
}