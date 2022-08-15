#include <stdio.h>
#include <string.h>

int main(){
    int size,n,x;
    scanf("%d%d",&size,&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Forward:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nBackward");
    for(int i=n;i>0;--i){
        printf("#d ",a[i]);
    }
    printf("\n");
    return 0;
}