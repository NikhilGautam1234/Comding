#include <iostream>
using namespace std;
void sorttwoarrays(int arr1[], int arr2[], int arrM[], int totalsize, int size1, int size2)
{
    cout<<"fn\n";
    int i = 0, k = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arrM[k] = arr1[i];
            i++;
            k++;
            cout<<"less"<<endl;
        }
        else if (arr1[i] > arr2[j])
        {
            arrM[k] = arr2[j];
            j++;
            k++;
            cout<<"more"<<endl;
        }
        cout<<"lomp"<<endl;
    }
    while (i < size1)
    {
        arrM[k] = arr1[i];
        i++;
        cout<<1<<endl;
    }
    while (j < size2)
    {
        arrM[k] = arr2[j];
        cout<<11<<endl;
    }
}
void printarray(int arrM[], int totalsize)
{
    for (int i = 0; i < totalsize; i++)
    {
        cout << arrM[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 12, 20, 21, 23};
 
    int arr2[4] = {5, 9, 12, 16};
    
   
    int arrM[9] = {0};
    sorttwoarrays(arr1, arr2, arrM, 9, 5, 4);
    printarray(arrM, 9);
    return 0;
}