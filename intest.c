// Note that this problem is for testing fast input-output.
#include <stdio.h> 


int main() {
    
    int n,k,i=0,s=0,m;
    
    scanf("%d%d",&n,&k);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m%k==0)
        s++;
    }
    
    printf("%d",s);
    
    
    
    
    
    
    
    
    
    
    
    
   /* 
    
    
	// Read the input n, k
	int n, k;
	scanf("%d %d", &n, &k);

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	printf("%d\n", ans);*/
	
	return 0;
}

