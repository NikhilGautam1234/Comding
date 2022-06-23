#include "bits/stdc++.h"
using namespace std;

int main(void){
    string s;cin>>s;
    string temp;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[n-i-1]!='\0')temp[i]=s[n-i-1];
        }
        cout<<temp;
        return 0;
}