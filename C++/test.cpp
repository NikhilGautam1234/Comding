// #include "bits/stdc++.h"
// using namespace std;

// int main(void){
//     int tt;cin>>tt;
//     while(tt--){
//         int n;cin>>n;
//         int a[n];
//         int x=n;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         sort(a,a+n);
//         for(int i=0;i<n;i++){
//             cout<<a[i]<<" ";
//         }
//         cout<<"\n";
//         for(int i=1;i<n;i++){
//             if(a[i-1]==a[i]){
//                 cout<<i<<" ";
//                 x--;
//                 cout<<"` "<<a[i-1]<<"\n";
//                 // remove(a,a+n,a[i-1]);
//             }
//         }
//         // int len=sizeof(a)/sizeof(int);
//         cout<<x<<"\n";
//     }
//     return 0;
// }

#include "bits/stdc++.h"
using namespace std;

int main(void){
    int tt;cin>>tt;
    while(tt--){
        char r[8][8];
        for (int i = 0; i < 8; i++)
        {
            for(int j=0;j<8;j++){
                cin>>r[i][j];
            }
        }
        for (int i = 1; i < 8; i++)
        {
            for(int j=0;j<8;j++){
                if(r[i][j]=='#'){
                    if((r[i-1][j+1]=='#')&&(r[i+1][j-1]=='#')&&(r[i-1][j-1]=='#')&&(r[i+1][j+1]=='#')){
                        cout<<i+1<<" "<<j+1<<endl;
                        goto next;
                    }
                }
            }
        }
        next:;
    }
}