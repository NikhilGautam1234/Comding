#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[1000], i,temp;
    printf("Enter the number of element: ");
    scanf("%d", &num);
    printf("Enter the elements:\n");
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for (i=0;i<num/2;i++) {
    temp=arr[i];
    arr[i]=arr[num-i-1];
    arr[num-i-1]=temp;    
    }
    printf("Array after reversing:\n");
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
