#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n,m;
        cin >> n >> m;

        int i,j;
        long long a[n+1][m+1];

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin >> a[i][j];
            }
        }

        long long count_1=0,count_2=0;
        for(i=1;i<=n;i++)
        {   
            for(j=1;j<=m;j++)
            {
                long long sum = a[i][j]+a[n-i+1][j]+a[i][m-j+1]+a[n-i+1][m-j+1];
                long long avg_1 = ceil((float)sum/4.0);
                long long avg_2 = floor((float)sum/4.0);
                count_1 += abs(avg_1-a[i][j]);
                count_2 += abs(avg_2-a[i][j]);
            }
        }

        cout << min(count_1,count_2) << endl;
        

    }
}