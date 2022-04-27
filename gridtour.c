#include <stdio.h>
#include <string.h>
int gcd(int a, int b);

int main() {
	int t;
	scanf("%d",&t);
	for(int m = 0; m< t; m++){
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    int a = k%n;
	    int b = k%m;
	    if(gcd(n,a) == 1 && gcd(m,b) == 1){
	    	long ret = (long)(n) * (long)(m);
	    	printf("%ld\n", ret);
	    }
	    else{
	    	printf("-1\n");
	    }
	}
	return 0;
}

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}
