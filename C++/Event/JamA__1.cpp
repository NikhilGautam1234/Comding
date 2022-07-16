#include "bits/stdc++.h"
#include "string"
using namespace std;

int main(void){
    int t,ppp=1;
    cin>>t;
    while(t--){
        string a,mim,temp,temst,m;
        cin>>a;
        int n = a.length(),x=0,b=n,j=0;
        temp=a;m=a;
        temst=a;
        while(b--){
            mim[0]=temst[0];
            x=0;
            for (int i = 0; i < n; i++)
            {
                if(temst[i]<mim[0]){
                    mim=temst[i];
                    x=i;
                }
            }
            if(a<m) m=a;
            else a=m;
            if(x<=j) j=x;
            else j=x+1;
            temst[x]='z';
            a.insert(a.begin()+j,temp.begin()+x,temp.end()-(n-x-1));
            cout<<" -"<<a<<" -"<<temst<<" "<<j<<" "<<x<<endl;
        }
        cout<<"Case #"<<ppp<<": "<<m<<endl;
        ppp++;
    }
}