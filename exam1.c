#include <stdio.h>
#include<string.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i=0,n,sum=0;
        scanf("%d",&n);
        char a1[n],a2[n];
        int b[n];
        scanf("%s%s",a1,a2);
        for(i=0;i<n-1;i++)
        {
            if(a2[i]=='N')
            {
                b[i]=0;
                //printf("\nN - %d",i);
                continue;
            }
            
            if((a1[i]==a2[i]))
            {
                //printf("\na1 - %d",i);
              //if((a1[i+1]==a2[i+1]))
              
              b[i]=1;
              //printf("\na2 - %d",i);
              
              
            }
               
               else
               {
               b[i]=0;
              // printf("Do - %d  ",i);
                   
              a2[i+1]='N';
               }
        }
         if(a1[i]==a2[i])
           b[i]=1;
           else
           b[i]=0;
        for(i=0;i<n;i++)
        {
            sum+=b[i];
        }
        printf("%d\n",sum);
        
    }

	return 0;
}

