#include "bits/stdc++.h"
using namespace std;

class stamtic
{
    static int enma;
    int x;

public:
    void inp()
    {
        cin >> x;
        try
        {
            if (x % 21!=0 && x > 92 && x < 47)
                throw x;
        }
        catch (int c)
        {
            cout<<"Error!!!\n";
            cerr << x << '\n';
        }
    }
};

int main(void)
{
    cout << "Enter a number to check whether its valid or not: ";
    stamtic trai;
    trai.inp();
}