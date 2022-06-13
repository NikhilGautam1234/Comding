#include "bits/stdc++.h"
using namespace std;

int main(void){
    int t;cin>>t;
    while(t--){
        long long n,k,x=0;
        cin>>n>>k;
        cout<<((n*k)/(n-1)-((n*k)%(n-1)==0))<<"\n";
    }
    return 0;
}