#include <iostream>
using namespace std;
int main(){
    int n,l,i=0,zoro[100001]={0};
    cout<<"\n\tNikhil Gautam\n\t21BCS9434\n";
    cout<<"Input number: ";
    cin>>n;
    while (n!=0)
    {
        l=n%10;
        zoro[i]=l;
        n/=10;
        i++;
    }
    l=zoro[0];
    zoro[0]=zoro[i-1];
    zoro[i-1]=l;
    cout<<"After swapping: ";
    for(;i>0;i--)
        cout<<zoro[i-1];
    return 0;
}