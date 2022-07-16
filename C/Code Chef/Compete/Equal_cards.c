#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int k,l=0;
	    scanf("%d",&k);
	    
	    if(k<53){
	        l=52%k;
	        printf("%d\n",l);
	    }
	}
	return 0;
}

