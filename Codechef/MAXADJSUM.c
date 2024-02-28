#include <stdio.h>

int main(void) {
	// your code goes here
	
	int t;
	scanf("%d", &t);
	
	for(; t>0; t--) {
	    int n;
	    scanf("%d", &n);
	    int f=10000;
	    int s=f;
	    int temp;
	    int sum=0;
	    
	    for(int i=0; i<n; i++) {
	        scanf("%d", &temp);
	        if(temp<=f){
	            s=f;
	            f=temp;
	        } else if(temp<=s) {
	            s=temp;
	        }
	        
	        sum += (2*temp);
	    }
	    
	    printf("%d\n", sum-f-s);
	}

}

