#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        int t,temp=0,l;
        scanf("%d",&t);
        while(t!=0){
            l=t%10;
            temp+=l;
            t=t/10;
        }
        printf("%d\n",temp);
    }
    


    return 0;
}