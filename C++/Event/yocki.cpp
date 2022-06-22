#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> s;
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        sort(s.begin(),s.end());
        int x=s[2]-s[1];
        int y=sqrt((x*x)+(s[0]*s[0]));
        cout<<y<<endl;
    }
}