#include <stdio.h>

int main(void){
    
    int x;
    float y,j;
    scanf("%d",&x);
    scanf("%f",&y);
    if(x%5==0&&x<y){
        j=y-x;
        if(j>=0.50)
        printf("%.2f",j-0.50);
        else
        printf("%.2f",y);
    }else{
        printf("%.2f",y);
    }
}