#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    
	    if(a+b+c<102){
	        if(a>50)
	        printf("A");
	        else if(b>50)
	        printf("B");
	        else if(c>50)
	        printf("C");
	        else
	        printf("Nota");
	    }
	}
	return 0;
}

