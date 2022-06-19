#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
       int n,m,j=1;
       cin>>n>>m;
       long long sum=0;
       for(int i=1;i<=n;i++){
            if(i==1){
                for(;j<=m;j++){
                    sum+=((i-1)*m)+j;
                }
                j=m;
                continue;
            }
            sum+=((i-1)*m)+j;
        }
        cout<<sum<<"\n";
    }
    return 0;
}