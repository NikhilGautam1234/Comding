#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
    int tt;cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll a[n],doomed=0,bruh=0,zerp=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i!=0 && i!=n-1){
                if(a[i]!=0) bruh=1;
                else doomed=1;
            }
            if(a[i]!=0) zerp++;
        }
        if(doomed && bruh) cout<<2<<"\n";
        else if(bruh || zerp) cout<<1<<'\n';
        else cout<<0<<"\n";
    }
    return 0;
}