#include <stdio.h>
 
int main(void) {
    
	int t;
	long int x, y, k;
	
	scanf("%d", &t);
	while(t--) {
		scanf("%ld%ld%ld", &x, &y, &k);
		if(((x + y) % (2 * k)) < k)
		   printf("Chef\n");
		else printf("Paja\n");
	}
	return 0;
}