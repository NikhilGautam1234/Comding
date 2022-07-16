#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n,sum=0,l=0;
	    scanf("%d",&n);
	    sum=n%10;
	    while(n>0){
	        l=n%10;
	        n/=10;
	    }
	    printf("%d\n",sum+l);
	}
	
	return 0;
}

