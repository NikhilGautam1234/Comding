#include "bits/stdc++.h"
using namespace std;

int cube(int x){
    return x*x*x;
}
float cube(float x){
    return x*x*x;
}

int main(void){
    int i;
    float f;
    cout<<"Enter integer type input: ";
    cin>>i;
    cout<<"Enter float type input: ";
    cin>>f;
    cout<<"Cube of "<<i<<" is: "<<cube(i)<<endl;
    cout<<"Cube of "<<f<<" is: "<<cube(f)<<endl;
}