#include <iostream>
#include<string>
using namespace std;
int main(){
    float n,sum=0,a;
    cout<<"\tNikhil Gautam\n\t21BCS9434\n";
    cout<<"Enter the number of subjects: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Subject #"<<i+1<<": ";
        cin>>a;
        sum+=a;
    }
    cout<<"\nTotal marks: "<<sum<<endl; 
    printf("The average is %.2f\n",sum/n);
    return 0;
}