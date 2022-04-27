//testing robot
#include <stdio.h>
#include <string.h>
void removeDuplicates( int arr[],int n)
{
    int i,j,k;
    int count=1;
    for(i=1; i<n; i++)
    {
        j=0;
        for(j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
               break;
            }
        }
        if(i==j)
            count++;
    }
    printf("%d\n",count);
}

int main(void) {
	char str[100];
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    long long int x;
	    int count=0;
	    scanf("%d",&n);
	    scanf("%lld",&x);
	    int arr[n+1];
	    memset(arr,0,sizeof(arr));
	    count++;
	    int i;
	    int j=0;
	    scanf("%s",str);
	    for(i=0;i<=n;i++)
	    {
	        if(str[i]=='L')
	        {
	            int t=x--;
	            arr[j++]=t;
	        }
	        else
	        {
	            int t1 = x++;
	            arr[j++]=t1;
	        }
	    }
	  
	   removeDuplicates(arr,j);
	}
	return 0;
}

