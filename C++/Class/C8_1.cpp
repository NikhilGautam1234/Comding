#include "bits/stdc++.h"
using namespace std;

double divd(int a, int b)
{
    if (b == 0)
    {
        cout << a << "/" << b;
        throw ": Error!\nDivision By Zero Condition.";
    }
    return (a / b);
}

int main()
{
    int n, m;
    double hue = 0;
    cout<<"Enter the numerator number: ";cin>>n;
    cout<<"Enter the denominator number: ";cin>>m;
    try
    {
        hue = divd(n, m);
        cout << hue << endl;
    }
    catch (const char *sanji)
    {
        cerr << sanji << endl;
    }
    return 0;
}