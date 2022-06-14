#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=n,b=n/2;
    if(n==2||n==3){
        cout<<"NO SOLUTION\n";
        return 0;
    }     
    for(int i=0+(n%2==0);i<n+(n%2==0);i++){
        if(i%2){
            cout<<b<<" ";
            b--;
        }
        else{
            cout<<a<<" ";
            a--;
        }
    }
    return 0;
}