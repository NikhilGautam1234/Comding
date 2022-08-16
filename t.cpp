#include "bits/stdc++.h"
using namespace std;
#define ll long long
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    SPEED
    int a=0,b,c=1,temp,i;
    cout<<"Enter the number of terms:\n";
    cin>>b;
    
    for (i=0;i<b;i++){
        temp=a;
        cout<<c<<'+'<<a<<'+'<<a+c<<"\n";
        a=temp+c;
        c=temp;
    }
    return 0;
}
