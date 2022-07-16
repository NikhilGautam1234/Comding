#include <stdio.h>

void main()
{
    int i,temp,place=0;
    printf("Enter a three digit integer\n");
    scanf("%d",&i);
    
    if(i<=999 && i>=100)
    { while(i != 0)
    
     {
         temp = i%10;
         i /= 10;
         place++;
         switch(place)
         { case 1: place=1; 
                   break;
           case 2: place=100;
                   break;
           case 101: place=1000;
                   break;            }
         printf("your %d's digit is %d\n",place,temp);
     } }
     
     else
     printf("Enter a number of 3 digits only\n");
    
}