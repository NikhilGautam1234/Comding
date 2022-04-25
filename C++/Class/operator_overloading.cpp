#include "bits/stdc++.h"
using namespace std;

class sanji{
    int x,y;
public: 
    void inp(){
        cin>>x>>y;
    }
    friend sanji operator +(sanji boa,sanji hancock){
        sanji shuru;
        shuru.x=boa.x+hancock.x;
        shuru.y=boa.y+hancock.y;
        return shuru;
    }
    void disp(){
        cout<<"The complex number after addition is: "<<x<<" + "<<y<<"i"<<endl;
    }
};

int main(void){
    cout<<"Nikhil\n21BCS9434"<<endl;
    sanji comp1,comp2,zoro;
    cout<<"Enter the real and imaginary part of the first complex number: ";
    comp1.inp();
    cout<<"Enter the real and imaginary part of the second complex number: ";
    comp2.inp();
    zoro=comp1+comp2;
    zoro.disp();
}
