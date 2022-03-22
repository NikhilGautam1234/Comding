#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int tt;    
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        int i,j;
        int count=0;

        for(j=1;j<=9;j++)
        {
            long long t=j;
            for(i=0;i<=9;i++)
            {
                if(t<=n) count++;

                t = (t*10)+j;
            }

            cout << endl;
        }

        cout << count << endl;

    }
}