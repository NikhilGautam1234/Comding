#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int d,n,sum=0;
        scanf("%d%d",&d,&n);
        
        while(d--){
            while(n>0){
                sum+=n;
                n--;
            }
            n=sum;
            sum=0;
        }    
        printf("%d\n",n);
    }
    return 0;
}