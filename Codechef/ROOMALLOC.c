#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	
	for(; t>0; t--) {
	    
	    int n;
	    scanf("%d", &n);
	    int temp;
	    int count = 0;
	    for(int i =0; i<n; i++) {
	        scanf("%d", &temp);
	        count += temp/2 + temp%2;
	    }
	    
	    printf("%d\n", count);
	}

}

