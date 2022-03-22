#include <stdio.h>

int sum(int *x,int *y){
    int *d;
    *d=*x+*y;
    return *d;
}
int main(){
    int a,b;
    printf("\tFUNCTION RETURNING POINTER\n");
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter two number for sum: ");
    scanf("%d%d",&a,&b);
    printf("The sum is %d",sum(&a,&b));
    return 0;
}