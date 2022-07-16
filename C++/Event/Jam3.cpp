#include <bits/stdc++.h>
using namespace std;

int main(){
    long t,x=1;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long c[n],omfo=1,d=0;
        for (long i = 0; i <n; i++) cin>>c[i];
        sort(c,c+n);
        while(n--){
            if(c[d]>=omfo){
                omfo++;
            }
            d++;
        }
        cout<<"Case #"<<x<<": "<<omfo-1<<endl;
        x++;
    }
    return 0;
}