#include <stdio.h>

int main(void){

    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(b!=0)
        printf("%d\n",a%b);
    }
    return 0;
}