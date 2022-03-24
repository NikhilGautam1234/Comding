#include <bits/stdc++.h>
using namespace std;

class area
{
    int length, breadth, a;

public:
    area()
    {
        length = 10;
        breadth = 27;
        cout << "Name: NIKHIL\nUID: 21BCS9434\n";
        cout << "Length = " << length << "\n";
        cout << "Breadth = " << breadth << "\n";
    }
    area(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void calc();
    void print();
    ~area();
};
void area::calc()
{
    a = length * breadth;
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
    int length, breadth;
    area z1;
    z1.calc();
    z1.print();
    cout << "Enter the length and breadth for parameterized constructor:\n";
    cin >> length >> breadth;
    area z2(length, breadth);
    z2.calc();
    z2.print();
    return 0;
}
