#include <bits/stdc++.h>
using namespace std;
class calcu
{
    int len, b, a;

public:
    calcu()
    {
        len = 10;
        b = 27;
        cout << "Name: NIKHIL\nUID: 21BCS9434\n";
        cout << "Length = " << len << "\n";
        cout << "Breadth = " << b << "\n";
    }
    calcu(int x, int y)
    {
        len = x;
        b = y;
    }
    void calc();
    void print();
    ~calcu();
};
void calcu::calc()
{
    a = len * b;
}
void calcu::print()
{
    cout << "Area = " << a << "\n";
}
calcu::~calcu()
{
    cout << "Object is being deleted\n";
}
int main()
{
    int len, b;
    calcu z1;
    z1.calc();
    z1.print();
    cout << "Enter the length and breadth for constructor:\n";
    cin >> len >> b;
    calcu z2(len, b);
    z2.calc();
    z2.print();
    return 0;
}
