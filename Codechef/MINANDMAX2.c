#include <stdio.h>
#include <stdint.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    for(; t>0; t--) {
        int64_t n;
        scanf("%d", &n);
        
        int64_t n2;
        n2 = (n*(n+1))/2;
        n2 -= 1;
        n2 += n;
        
        printf("%lld\n", n2);
    }
}

