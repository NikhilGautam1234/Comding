#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long a[n], omd = 0, evem = 0, o=0, e=0, sum = 0,swamp=0;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]=abs(a[i]);
            if(i==0) evem=a[i];
            if (i % 2){
                sum-=a[i];
                if (a[i] > omd){ omd=a[i];o = i;}
            }
            else{
                sum+=a[i];
                if (a[i] < evem){ evem=a[i];e = i;} 
            }
        }
        swap(a[o],a[e]);
        for(long i=0;i<n;i++){
            if(i%2) swamp-=a[i];
            else swamp+=a[i];
        }
        cout<<max(sum,swamp)<<endl;
    }
}