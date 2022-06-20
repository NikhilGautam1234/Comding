#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        int a,b;
        cin>>a>>b;
        char s='1',d='0';
        int x=min(a,b);
        for(int i=0;i<a+b;i++){
            if(i<=x*2||a==b){
                if((i%2==0)-(a>b)) cout<<s;
                else cout<<d;
            }
            else{
                if(a>b) cout<<d;
                else cout<<s;
                
            }
        }
        cout<<"\n";
    }
    return 0;
}