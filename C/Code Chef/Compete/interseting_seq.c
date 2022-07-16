#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n,count=0;
	    scanf("%d",&n);
	    
	    while(n%2==0){
	        count++;
	        n=n/2;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

