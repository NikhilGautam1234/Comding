#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
    int tt;cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll a[n],doomed=0,bruh=1,z=1,l=0,r=0,x=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=0) bruh=0;
        }

        for(int i=0;i<n;i++){
            if(a[i]!=0 && x) l=i,x--;
            if(a[n-i-1]!=0 && z) r=n-i,z--;
        }
        //cout<< l <<" \n";
        for(int i=l;i < r;i++){
            if(a[i]==0){ doomed = 1;break;}
        }
        if(doomed) cout<<2<<"\n";
        else if(bruh) cout<<0<<'\n';
        else cout<<1<<"\n";
    }
    return 0;
}