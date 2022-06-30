#include "bits/stdc++.h"
using namespace std;
int counter = -1;
int odd = 0;

void deviderr(int arr[],int m);
void evenmaker(int arr[], int m);
void oddmaker(int arr[], int m);

int main()
{
    int n;
    cin >> n;
    int m = n * 2;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    deviderr(arr, m);

    return 0;
}
void deviderr(int arr[], int m)
{
    counter++;
    int even = 0;

    for (int i = 0; i < m; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }

    if (even == odd)
    {
        cout << counter << endl;
        return;
    }
    if (odd > even)
    {

        evenmaker(arr, m);
    }
    if (even > odd)
    {
        oddmaker(arr, m);
    }
}
void evenmaker(int arr[], int m)
{
    for (int i = 0; i <= m; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr[i] = arr[i] * 2;
            break;
        }
    }
    deviderr(arr, m);
}
void oddmaker(int arr[], int m)
{
    int temp = 0;
    int min = INT_MAX;
    int holdIndex = -1;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                holdIndex = i;
            }
        }
    }
    arr[holdIndex] = arr[holdIndex] / 2;
    counter++;
    deviderr(arr, m);
}