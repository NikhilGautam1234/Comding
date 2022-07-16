#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float d;
    cin >> n >> d;
    int a[n], beni = 0, diablo, nami;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        while (a[i] <= a[i-1])
        {
            nami = a[i-1] - a[i];
            if (nami == 0)
            {
                beni++;
                a[i] += d;
            }
            else
            {
                diablo = ceil(nami / d);
                a[i] += diablo * d;
                beni += diablo;
            }
        }
    }

    cout << beni << endl;
    return 0;
}