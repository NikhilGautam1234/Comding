#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,k,l;
        scanf("%d%d%d",&n,&k,&l);

        if (k<=n)
        {
            printf("PIZZA\n");
        }else if(l<=n){
            printf("BURGER\n");
        }else
        {
            printf("NOTHING\n");
        }  
    }
    return 0;
}