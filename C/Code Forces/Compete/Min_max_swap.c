#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n,max1=0,temp,max2=0;
        scanf("%d",&n);
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i]<b[i])
            {
                temp=b[i];
                b[i]=a[i];
                a[i]=temp;                
            }            
            if(a[i]>max1) max1=a[i];
            if(b[i]>max2) max2=b[i];
        }
        printf("%d\n",max1*max2);       
    }
    return 0;
}