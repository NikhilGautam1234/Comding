#include <stdio.h>
#include <stdlib.h>

struct adress_book
{
    char name[20];
    char city[20];
    long int contact[10];
}*ptr;

int main()
{
    ptr=(struct adress_book *)malloc(50*sizeof(char));
    printf("Nikhil Gautam\n21BCS9434\n");
    printf("Enter the name : ");
    gets(ptr->name);
    printf("Enter the city: ");
    gets(ptr->city);
    printf("Enter the contact: ");
    scanf("%ld",&ptr->contact);
    free(ptr);
    return 0;
}
