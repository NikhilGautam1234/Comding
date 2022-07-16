#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,z,y,x;
        scanf("%d",&n);
        a=n*3;
        z=a/2;
        y=((z*2)-4)/2;
        for (int i = 1; i <=z; i++)
        {
            if (z+y+i==a) x=i;
        }
        printf("%d %d %d\n",x,y,z);                
    }
    return 0;
}