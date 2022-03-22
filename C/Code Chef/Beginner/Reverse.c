#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n,temp,i=0;
        scanf("%d",&n);
        while (n>0)
        {
            temp=n%10;
            i=i*10+temp;
            n/=10;
        }
        printf("%d\n",i);
    }
    return 0;
}