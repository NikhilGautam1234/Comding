#include <bits/stdc++.h>
using namespace std;

class area
{
    int len, b, a;

public:
    area()
    {
        len = 10;
        b = 27;
        cout << "Name: NIKHIL\nUID: 21BCS9434\n";
        cout << "Length = " << len << "\n";
        cout << "Breadth = " << b << "\n";
    }
    area(int x, int y)
    {
        len = x;
        b = y;
    }
    void calc();
    void print();
    ~area();
};
void area::calc()
{
    a = len * b;
}
void area::print()
{
    cout << "Area = " << a << "\n";
}
area::~area()
{
    cout << "Object is being deleted\n";
}
int main()
{
    int len, b;
    area z1;
    z1.calc();
    z1.print();
    cout << "Enter the length and breadth for constructor:\n";
    cin >> len >> b;
    area z2(len, b);
    z2.calc();
    z2.print();
    return 0;
}
