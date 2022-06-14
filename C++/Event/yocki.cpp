#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        int l,d,pen,pec,k;
        cin>>l>>d>>pen>>pec>>k;
        int x=ceil((float)l/pen),y=ceil((float)d/pec);
        if(x+y>k) cout<<-1<<"\n";
        else cout<<x<<" "<<y<<"\n";
    }
}