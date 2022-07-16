#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100], temp[100];
    int i;
    char* temp2;
    printf("\nEnter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);printf("\n\n");
    while (1){
        printf("Enter the command:\n 1. String length\n 2. String Compare\n 3. String Copy\n 4. String Concatenate\n 5. String Reverse\n 6. String in uppercase\n 7. String in lowercase\n 8. Size of String in bytes\n 9. Search string in first array\n 10. Exit\n");
        scanf("%d", &i);
        switch (i){
        case 1:
            printf("The length of the first string is %ld \n", strlen(a));
            printf("The length of the second string is %ld \n\n", strlen(b));
            break;
        case 2:
            if ((strcmp(a, b)) == 0){
                printf("The strings are equal.\n\n");
            }else{
                printf("The string are not equal.\n\n");}
            break;
        case 3:
            strcpy(temp, a);
            strcpy(a, b);
            printf("The copied string is %s \n\n", a);
            strcpy(a, temp);
            break;
        case 4:
            strcpy(temp, a);
            strcat(a, b);
            printf("The concatenated string is %s \n\n", a);
            strcpy(a, temp);
            break;
        case 5:
            strcpy(temp, a);
            strrev(a);
            printf("The first string in reverse is %s \n",a);
            strcpy(a,temp);
            strcpy(temp,b);
            strrev(b);
            printf("The second string in reverse is %s \n\n",b);
            strcpy(b,temp);
            break;  
        case 6:
            strcpy(temp, a);
            strupr(a);
            printf("The first string in uppercase is %s \n",a);
            strcpy(a,temp);
            strcpy(temp,b);
            strupr(b);
            printf("The second string in uppercase is %s \n\n",b);
            strcpy(b,temp);
            break;  
        case 7:
            strcpy(temp, a);
            strlwr(a);
            printf("The first string in lowercase is %s \n",a);
            strcpy(a,temp);
            strcpy(temp,b);
            strlwr(b);
            printf("The second string in lowercase is %s \n\n",b);
            strcpy(b,temp);
            break;          
        case 8:
            printf("The bytes of the first string is %ld \n", strnlen(a,100));
            printf("The bytes of the second string is %ld \n\n", strnlen(b,100));
            break; 
        case 9:
            temp2=strstr(a,b);
            if (temp2)
            {printf("String found\nFirst occurrence of string '%s' in '%s' is '%s'", b, a, temp2);
            } else printf("String not found\n");
            break;                     
        case 10:
            goto end;
            break;
        default:
            printf("You have entered wrong input.\n\n");
        }
    }
    end:
    return 0;
}