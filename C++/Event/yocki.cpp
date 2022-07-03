#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
    int tt;cin>>tt;
    while(tt--){
        ll x;
        cin>>x;
        int c=0;
        //cout<<"~ "<<p<<endl;
        if(x%3){
            do{
                x+=4;
                c++;
            }while(x%3!=0);
        }
        cout<<c<<"\n";
    }
    return 0;
}