#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        if((n%2)!=0||n<4) cout<<-1<<"\n";
        else
        {
            long long maxi=1,mini=1;
            if(n>=6) mini=n/6;
            maxi=n/4;
            if((n%6!=0)&&(n>=6)) mini++;
            cout<<mini<<" "<<maxi<<"\n";
        }
    }
    return 0;
}