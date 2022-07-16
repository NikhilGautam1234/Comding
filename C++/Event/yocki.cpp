#include "bits/stdc++.h"
#define ll long long
using namespace std;

int main(){
    int tt;cin>>tt;
    while(tt--){
        ll n,m,k,x,b=0;
        cin>>n>>m>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        x=1;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]>k) b++;
        }
        auto ind = lower_bound(v.begin(),v.end(),k);
        if(b>=m) cout<<"YES\n";
        else if(m==1) cout<<"NO\n";
        else{
            int e = k-1;
            int s=0;
            int i = ind - v.begin()-1;
            // for(int i=0;i<n;i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<"Index: "<<i<<" [i]: "<<v[i]<<" \n";
            for(;i>=0;){
                // cout<<"E: "<<e<<endl;
                if(v[i]!=e) break;
                while(v[i]==e){
                    // cout<<"V[i]:- "<<v[i]<<" ";
                    s++;
                    i--;
                }
                e--;
            }
            // cout<<"\nS: "<<s<<" B: "<<b<<"\n";
            if(b+s>=m) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}