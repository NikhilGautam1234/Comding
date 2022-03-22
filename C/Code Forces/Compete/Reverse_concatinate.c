#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        char s[10001],hue[10001],zoro[10001];
        scanf("%d%d%s",&n,&k,&s);
        strcpy(hue,s);
        strcpy(zoro,s);
        strrev(hue);
        strcat(zoro,hue);
        strcat(hue,s);
        if(strcmp(zoro,hue)==0||k==0) printf("1\n");
        else printf("2\n");
    }
    
    return 0;
}