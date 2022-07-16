#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b,c=1,temp,i,mis[10001],j=4;
    cout<<"\n\tNikhil Gautam\n\t21BCS9434\n";
    cout<<"Enter the number of terms: ";
    cin>>b;
    cout<<"Fibonacci Series:\n";
    cout<<"0\n";
    for (i=0;i<b-1;i++){
        temp=a;
        cout<<a+c<<"\n";
        mis[i]=a+c;
        a=temp+c;
        c=temp;
    }
    cout<<"\nMissing Number:\n";
    for (int i = 4; i < mis[b-2]; i++)
    {
        while(j>mis[i-1]&&j<mis[i]){
            cout<<j<<"\n";
            j++;
        }
        j++;
    }
    
    return 0;
}