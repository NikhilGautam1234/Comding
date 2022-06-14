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
        string t,h,m,ch,cm;
        int s,ho,mi,sh,sm,ah[10001],am[10001],temph=0,tempm=0,p=0,x=0;
        cin>>t>>s;
        t.erase(t.begin()+2);
        // cout<<t<<endl;
        h=t;m=t;
        h.erase(2);
        m.erase(0,2);
        // cout<<h<<" "<<m<<endl;
        sh=stoi(h);
        sm=stoi(m);
        cout<<"`  "<<sh<<" "<<sm<<endl;
        ho=s/60;
        mi=s-(ho*60);
        cout<<"'  "<<ho<<" "<<mi<<endl;
        do{
            if(x==0){
                tempm=sm;
                temph=sh;
                x+=1;
            }
            if(temph>23) temph-=24;
            if(tempm>59) {temph++;tempm-=60;}
            ch=to_string(temph);
            cm=to_string(tempm);
            ch=ch+cm;
            cout<<"`  "<<ch<<endl;
            if(ch[0]==ch[3]&&ch[1]==ch[2]) p++; 
            cout<<"/  "<<temph<<" "<<tempm<<endl;
            if(x==1){
                temph+=ho;
                tempm+=mi;
            }
        }while(ch!=t);
        cout<<p<<endl;
    }
}