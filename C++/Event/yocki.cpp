#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        int a=0,b=0,k=0,n=s.length();
        for(int i=0;i<s.length();i++){
            if((i+(s[0]=='0'||s[0]=='?'))%2){
                if(s[i]=='1') b++;
                if(a>=3&&b<3||b>=3&&a<3) break;
            }
            else{
                if(s[i]=='1'||s[i]=='?') a++;
            }
            if(a>=10-i||b>=10-i) break;
            k++;
        }
        cout<<k<<endl;
    }
}