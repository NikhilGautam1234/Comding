#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pal,str;
    cin>>pal;
    str=pal;
    char x=' ';
    int n=pal.length(),count=0,j=1;
    sort(pal.begin(),pal.end());
    // cout<<"`"<<pal<<"\n";
    for(int i=1;i<n;i++){
        if(pal[i-1]==pal[i]){
            str[j-1]=pal[i-1];
            str[n-j]=pal[i];
            if(i+2<n) i++;
            j++;
            // cout<<"/ "<<n-j<<"-- "<<j<<endl;
        }else
        {
            if (n%2){
                count++;
                if(i+2>n) x=pal[i];
                else x=pal[i-1];
                // cout<<x<<" ";
            }
            else{
                cout<<"NO SOLUTION\n";
                return 0;
            }
            if(count>1){
                cout<<"NO SOLUTION\n";
                return 0;
            }
        }
        // cout<<i;
        // cout<<"~~"<<str<<"\n";
    }
    // cout<<"# "<<ceil(n/2)<<endl;
    if((n%2)&&(n>1)) str[ceil(n/2)]=x;
    cout<<str<<"\n";
    return 0;
}