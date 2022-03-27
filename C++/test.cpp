#include <bits/stdc++.h>
using namespace std;
class calcu
{
    int lemgth, b, a;

public:
    calcu()
    {
        lemgth = 10;
        b = 27;
        cout << "Name: NIKHIL\nUID: 21BCS9434\n";
        cout << "Length = " << lemgth << "\n";
        cout << "Breadth = " << b << "\n";
    }
    calcu(int x, int y)
    {
        lemgth = x;
        b = y;
    }
    void calc();
    void print();
    ~calcu();
};
void calcu::calc()
{
    a = lemgth * b;
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
    int lemgth, b;
    calcu f;
    f.calc();
    f.print();
    cout << "Enter the length and breadth for constructor:\n";
    cin >> lemgth >> b;
    calcu z2(lemgth, b);
    z2.calc();
    z2.print();
    return 0;
}
