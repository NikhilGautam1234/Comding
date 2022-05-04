#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void oup()
    {
        cout << "Base Class :) \n";
    }
};

class B : public virtual A{};

class C : public virtual A{};

class D : public B, public C{};

int main()
{
    D zoro;
    zoro.oup();
}
