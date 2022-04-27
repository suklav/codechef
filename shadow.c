#include <stdio.h>
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int maximumXOR(int arr[] , int n , int k) 
{ 
    int current_xor = 0 ; 
    for (int i = 0 ; i < k ; i++) 
        current_xor  = current_xor ^ arr[i]; 
  
    int max_xor = current_xor; 
    for (int i = k ; i < n; i++) 
        {
          current_xor = current_xor ^ arr[i-k]; 
          current_xor = current_xor ^ arr[i]; 
          max_xor = max(max_xor, current_xor); 
        } 
    return max_xor; 
} 
  
int main(void) {
    int t;
scanf("%d",&t);
while(t--)
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d\n",maximumXOR(a, n, k)); 
}
	return 0;
}

