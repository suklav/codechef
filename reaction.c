#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int r,c;
	    scanf("%d %d",&r,&c);
	    int a[10][10];
        int flag=1;
	    int i,j;
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            scanf("%d",&a[i][j]);
	            if(a[i][j]>=4)
	            {
	                flag=0;
	            }
	            else if((i==0 || i==r-1) && j>0 && j<c-1 && a[i][j]>=3)
	            {
	                flag=0;
	            }
	            else if((j==0 || j==c-1) && i>0 && i<r-1 && a[i][j]>=3)
	            {
	                flag=0;
	            }
	            else if((j==0 || j==c-1) && (i==0 || i==r-1) && a[i][j]>=2)
	            {
	                flag=0;
	            }
	        }
	    }
	    if(flag==1)
	    {
	        printf("Stable\n");
	    }
	    else
	    {
	        printf("Unstable\n");
	    }
	    
	}
	return 0;
}