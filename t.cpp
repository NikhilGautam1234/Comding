#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    SPEED;
    int tt;cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        map<ll,ll> a,b;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            if(a[x]==0) a[x]=n-i;
            b[x]=n-i;
        }
        ll q,w;
        for(int i = 0 ; i<k ; ++i){
            cin>>q>>w;
            if(a[q]>=b[w] && a[q]!=0 && b[w]!=0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
