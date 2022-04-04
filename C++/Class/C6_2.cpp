#include "bits/stdc++.h"
using namespace std;

class zoro{
    int a,b,c;
    public:
    void inp(int x,int y,int z){
        a=x;b=y;c=z;
    }
    friend zoro operator -(zoro enma){
        enma.a=--enma.a;
        enma.b=--enma.b;
        enma.c=--enma.c;
        return enma;
    }
    void oup(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};

int main(){
    zoro A,c,b;
    A.inp(1,-2,3);
    c=operator -(A);
    c.oup();
    return 0;
}