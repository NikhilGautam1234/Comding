#include "bits/stdc++.h"
using namespace std;

int main(void){
    int t;cin>>t;
    while(t--){
        int sum=0,n,i=1;
        cin>>n;
        while (n>0)
        {
            int last=n%10;
            if(last==0) last=5;
            sum+=(last*i);
            i*=10;
            n/=10;
        }
        cout<<sum<<endl;
    }
}