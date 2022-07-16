#include "bits/stdc++.h"
using namespace std;

int main(void){
    int n,m;
    cin>>n>>m;
    if(m < n*2 && n!=m) cout<<-1<<"\n";
    else{
        int temp = m,cnt=0;
        while(temp > n){
            if(temp/6 >= n) temp/=6,cnt+=2;
            else if(temp/3 == n) temp/=3,cnt++;
            else if(temp/2 == n) temp/=2,cnt++;
            else {cout<<-1<<'\n';return 0;}
        }
        cout<<cnt<<"\n";
    }
    return 0;
}