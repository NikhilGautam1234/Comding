#include "bits/stdc++.h"
using namespace std;

class luffy{
    int x,y;
public: 
    int inp(){
        cin>>x>>y;
        return x;
    }
    friend luffy amdd(luffy boa,luffy hancock);
    void disp(){
        cout<<"The complex number after addition is: "<<x<<" + "<<y<<"i"<<endl;
    }
};

luffy amdd(luffy boa,luffy hancock){
    luffy shuru;
    shuru.x=boa.x+hancock.x;
    shuru.y=boa.y+hancock.y;
    return shuru;
}

int main(void){
    cout<<"Nikhil\n21BCS9434"<<endl;
    int a,b;
    luffy comp1,comp2,zoro;
    cout<<"Enter the real and imaginary part of the first complex number: ";
    a=comp1.inp();
    cout<<"Enter the real and imaginary part of the second complex number: ";
    b=comp2.inp();
    try{
        if(a<5||b<5) throw a;
    }
    catch(int e){
        cout<<"Error detected!!!\n!One or more Real part is less than 5!\nExiting the comde...";
        return 0;
    }
    zoro=amdd(comp1,comp2);
    zoro.disp();
}