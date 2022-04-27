#include <stdio.h>
long long int findNth(long long int n) 
{ 

    for (long long int curr = n*10; curr<=(n+1)*10; curr++) { 
   
        long long int sum = 0; 
        for (long long int x = curr; x > 0; x = x / 10) 
           sum = sum + x % 10; 
        if (sum%10 == 0) 
            return curr;
    } 
    return -1; 
} 
  
int main() 
{ 
long long int t;
scanf("%lld",&t);
while(t--)
{
long long int n;
scanf("%lld",&n);
    printf("%lld\n", findNth(n)); 
   
}
 return 0; 
} 