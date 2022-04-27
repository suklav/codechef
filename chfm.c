#include <stdio.h>
float mean(int a[],int except,int n)
{
    int i=0;
    float avg=0.0,sum=0.0;
    for(i=0;i<n;i++)
    {
        if(i!=except)
        {
            sum+=a[i];
        }
    }
    //printf("\nex %d\n",except);
    if(except != (n+1))
    {
    avg=(float)(sum/((float)(n-1)));
    //printf("Entr sum=%f,avg=%f,n=%d\n",sum,avg,n);
      return avg;  
    }
    else
    avg= sum /n;
    return avg;
    
}
int main(void) {
	int t;
	scanf( "%d", &t );
	while(t--)
	{
	    int n,count=0,ifsame=-1;
	    scanf( "%d", &n );
	    
	    int a[n];
	    float mean1=0,mean2=0.0;
	    
	    for(int i=0; i<n; i++)
	    {
	    scanf( "%d", &a[i]);
	    if( i>0 && ifsame!=0 )
	    {
	        if(a[i]==a[i-1])
	        ifsame=1;
	        else
	        ifsame=0;
	    }
	    
	    }
	    if(ifsame==1)
	    {
	    printf("1\n");
	    continue;
	    }
	    mean1=mean(a, n+1, n);
	    
	    for(int i=0; i<n; i++)
	    {
	        mean2 = mean(a , i , n);
	        //printf("mean%f\n",mean2);
	        //printf("\n%f  %f \n",mean1,mean2);
	        if(mean1 == mean2)
	        {
	            printf("%d\n",i+1);
	            count++;
	            break;
	        }
	        
	    }
	    
	    if(count==0)
	    printf("Impossible\n");
	    
	}
	return 0;
}

