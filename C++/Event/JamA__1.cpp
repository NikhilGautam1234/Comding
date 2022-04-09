#include "bits/stdc++.h"
#include "string"
using namespace std;

int main(void){
    int t,ppp=1;
    cin>>t;
    while(t--){
        string a,mim,temp,temst,m;
        cin>>a;
        int n = a.length(),x=0,b=n,j;
        temp=a;m=a;
        temst=a;
        while(a<=m&&b--){
            m=a;
            mim[0]=temst[0];
            x=0;
            for (int i = 0; i < n; i++)
            {
                if(temst[i]<mim[0]){
                    mim=temst[i];
                    x=i;
                }
            }
            if(x<=j) j=x;
            else j=x+1;
            temst[x]='Z';
            a.insert(a.begin()+j,temp.begin()+x,temp.end()-(n-x-1));
            cout<<" -"<<a<<" -"<<temst<<" "<<x<<endl;
        }
        cout<<"Case #"<<ppp<<": "<<m<<endl;
        ppp++;
    }
}