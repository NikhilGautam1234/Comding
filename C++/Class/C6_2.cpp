#include "bits/stdc++.h"
using namespace std;
class zoro
{
    int a, b, c;
public:
    void inp(int x, int y, int z)
    {
        a = x;b = y;c = z;
    }
    friend zoro operator-(zoro enma, zoro shushui)
    {
        zoro sanji;
        sanji.a = enma.a - shushui.a;
        sanji.b = enma.b - shushui.b;
        sanji.c = enma.c - shushui.c;
        return sanji;
    }
    void oup()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    zoro A, c, B;
    A.inp(1, -2, 3);
    B.inp(1, -3, -6);
    c = A - B;
    c.oup();
    return 0;
}