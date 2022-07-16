#include "bits/stdc++.h"
using namespace std;

int main(){
    long t,x=1;
    cin>>t;
    while(t--){
        long r,c;
        cin>>r>>c;
        long l=(2*r)+1,g=0,k=(2*c)+1;
        cout<<"Case #"<<x<<": "<<endl;
        for(long j=0;j<l;j++){
            if(j%2){
                for (long i = 0; i < k; i++)
                {
                    if((i==0||i==1)&&(j<2)) cout<<".";
                    else if(i%2) cout<<".";
                    else cout<<"|";
                }
            }else{
                for (long i = 0; i < k; i++)
                {
                    if((i==0||i==1)&&(j<2)) cout<<".";
                    else if(i%2) cout<<"-";
                    else cout<<"+";
                }
            }
            cout<<endl;
        }
        x++;
    }
    return 0;
}