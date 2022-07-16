#include <stdio.h>

int main()
{
    int a[2][2],i,n;

    for (i=0; i < 2; i++)
    {
        for (n = 0;n<2; n++){
        
        printf("Enter your digit for matrix a[%d][%d]\n",i,n);
        scanf("%d\n%d",&a);
    }}
    printf("Matrix: %d",a[2][2]);
    return 0;
}
