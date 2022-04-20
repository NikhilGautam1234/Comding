#include "bits/stdc++.h"
using namespace std;


int main(void){
    int a,b;
    cin>>a>>b;

    try{
        if(b!=0) cout<<a/b;
        else throw (b);
    }

    catch(int x){
        cout<<"Error denominator is zero...";
    }
}