#include <stdio.h>
#define int long int 
signed main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,x=1,y,temp1,temp2;
        scanf("%d%d",&n,&m);
        if (m>n){
            temp1=n;
            n=m;
            m=temp1;
        }
        temp1=m;
        temp2=n;
        while(x>0){
            x=n%m;
            n=m;
            if(x!=0) m=x;
        }
        y=(temp1*temp2)/m;
        printf("%d %d\n",m,y);
    }
    return 0;
}