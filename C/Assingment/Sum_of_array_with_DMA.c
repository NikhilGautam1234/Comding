#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,sum=0;
    int *arr;
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("\tSum of elements using DMA\n");
    printf("Enter the no. of elements in array: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));    
    printf("Enter the elements in array:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum of elements is %d\n\n",sum);
    return 0;
}