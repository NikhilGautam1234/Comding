#include <stdio.h>
/*int largest(int *arr[],int z){
    int p,m;
    for (int i = 0; i < z; i++)
    {
        if(arr[i]>arr[i+1]){
            p=arr[i];
            if (p>m)
            {
                m=p;
            }                       
        }
    }
    return m;    
}*/

int main(){
    int a;
    printf("Enter how many numbers you want to compare : ");
    scanf("%d",&a);
    int max[100];
    printf("Enter the numbers: \n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",max[i]);
    }
    int p,m;
    for (int i = 0; i < a-1; i++)
    {
        if(max[i]>max[i+1]){
            p=max[i];
            if (p>m)
            {
                m=p;
                printf("%d",m);
            }                       
        }
    }
    printf("The largest number is %d",m);

    return 0;
}
