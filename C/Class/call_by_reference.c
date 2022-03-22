#include <stdio.h>
//Call by Value
void swap1(int a, int b){
    int temp;
    printf("In Function values before swapping: %d %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("In Function values after swapping: %d %d\n\n", a, b);
}

//Call by reference
void swap(int *a, int *b){
    int temp;
    printf("In Function values before swapping: %d %d\n", *a, *b);
    temp = *a;
    *a = *b;
    *b = temp;
    printf("In Function values after swapping: %d %d\n\n", *a, *b);
}

int main(){

    int p, q;
    printf("By value:\n");
    printf("Enter two numbers: ");
    scanf("%d%d", &p, &q);
    printf("In Main values before swapping: %d %d\n\n", p, q);
    swap1(p, q);
    printf("In Main values after swapping: %d %d", p, q);
    printf("\n");

    printf("By ref:\n");
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("In Main values before swapping: %d %d\n\n", x, y);
    swap(&x, &y);
    printf("In Main values after swapping: %d %d", x, y);
    return 0;
}