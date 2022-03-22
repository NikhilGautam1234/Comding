#include<stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a+b>c&&b+c>a&&a+c>b)||(b+c>d&&c+d>b&&d+b>c)||(c+d>a&&d+a>c&&a+c>d)||(a+b>d&&b+d>a&&a+d>b)) printf("TRIANGLE\n");
    else if((a+b==c||b+c==a||a+c==b)||(b+c==d||c+d==b||d+b==c)||(c+d==a||d+a==c||a+c==d)||(a+b==d||b+d==a||a+d==b)) printf("SEGMENT\n");
    else printf("IMPOSSIBLE\n");
    return 0;
}