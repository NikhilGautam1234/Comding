#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--){
        int n,k;
        scanf("%d%d",&n,&k);

        if (n>=2&&n<=400&&k<n)
        {
            if ((n-k)>=k)
            {
                printf("%d\n",k);
            }else if (k>(n-k))
            {
                printf("%d\n",n-k);
            }
        }   
	}
	return 0;
}

