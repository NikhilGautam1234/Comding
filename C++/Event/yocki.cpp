#include <bits/stdc++.h>
using namespace std;

int main()
{
    test
    {
        int n;
        cin >> n;
        int a[n],i,temp[n]={0};
        for (i = 0; i < n; i++) cin >> a[i];
        temp[0]++;
        if (a[0] == 0) temp[1]++;
        else temp[1] = 2;
        for (i = 2; i < n; i++)
        {
            if ((a[i - 1] == 1 && temp[i - 1] == 1) || (a[i - 1] == 0 && temp[i - 1] == 2))
                temp[i] = 2;
            else
                temp[i] = 1;
        }

        if ((temp[n - 1] + temp[0]) % 2 == a[n - 1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}