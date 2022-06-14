#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        int a,b,c,d,aage=0;
        cin>>a>>b>>c>>d;
        if(b>a) aage++;
        if(c>a) aage++;
        if(d>a) aage++;
        cout<<aage<<"\n";
    }
    return 0;
}