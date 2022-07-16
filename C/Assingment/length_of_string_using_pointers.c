#include <stdio.h>
#include <string.h>

int main(){
    char *str;
    printf("Enter the string: ");
    gets(str);
    printf("The length of string is %d",strlen(str));
    return 0;
}