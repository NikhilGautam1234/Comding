#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        ll a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            sum+=max(a[i],a[i-1]);
        }
        sum+=a[n-1];
        //cout<<sum<<"\n";
        if(sum+n <= m) cout<<"YES\n";
        else cout<<"NO\n";
    }
}