#include "bits/stdc++.h"
using namespace std;

int main(void){
    string s;
    cin>>s;
    int u=0,l=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])) u++;
        else l++;
    }
    for(int i=0;i<s.length();i++){
        if((u>l)&&isupper(s[i])==0) s[i]-=32;
        else if((u<=l)&&isupper(s[i])!=0) s[i]+=32;
    }
    cout<<s<<"\n";
    return 0;
}