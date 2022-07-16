#include "bits/stdc++.h"
using namespace std;

class Bamse
{
    int x;
public:
    Bamse()
    {
        cout << "Base class default constructor\n";
        cout << "Base class parameterized constructor\n";
    }
};

class Vinsmoke : public Bamse
{
    int y;
public:
    Vinsmoke()
    {
        cout << "Derived class default constructor\n";
    }

    Vinsmoke(int i) : Bamse(i)
    {
        cout << "Derived class parameterized constructor\n";
    }
};

int main(void)
{
    Bamse b;
    Vinsmoke d1;
    Vinsmoke d2(10);
}