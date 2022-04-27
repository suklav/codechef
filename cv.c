#include <stdio.h>
#include <string.h>

int main(void) {
    	int t,n,index=0,i,res[100],r=0,tn;
	   
    	scanf("%d",&t);
    	tn=t;
	while(t--)
	{
	    index=0;
	    scanf("%d",&n);
	    char a[100];
	    scanf("%s",a);
	    for(i=0;i<n;i++)
	    {
	        if(!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'))
	        {
	            //printf("%c%c",a[i],a[i+1]);
	          if((i<n-1)&&((a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')))
	          index++;
	            
	        }
	        
	    }
	    //res[r++]=index;
	    printf("%d\n",index);
	    
	}
	  // for(r=0;r<tn;r++) 
	  // printf("%d",res[r]);
	return 0;
}