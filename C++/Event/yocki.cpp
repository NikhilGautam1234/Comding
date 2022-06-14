#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i!=0){
            if(a[i-1]>a[i]){
                m+=a[i-1]-a[i];
                a[i]+=a[i-1]-a[i];
                // cout<<" `"<<m<<endl;
            }
        }
    }
    cout<<m<<"\n";
    return 0;
}