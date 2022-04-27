#include <stdio.h>
#include<string.h>
#define max 100
struct node
{
    char first[max];
    char last[max];
    int x;
    
};
int main(void) {
    int t,n,i,j,k=0;
    scanf("%d",&t);
    while(k<t)
    {
        scanf("%d",&n);
        struct node name[n];
        for(i=0;i<n;i++)
        {
            scanf("%s%s",name[i].first,name[i].last);
            name[i].x=0;
        }
        for(i=0;i<n;i++)
        {
            if(name[i].x==0)
            {
            for(j=i+1;j<n;j++)
            {
                if(!strcmp(name[i].first,name[j].first))
                {
                
                    name[i].x=1;
                    name[j].x=1;
                }
            }
            }
        }
        for(i=0;i<n;i++)
        {
            if(name[i].x==0)
            {
            printf("%s\n",name[i].first);
            }
            else
            printf("%s %s\n",name[i].first,name[i].last);
            
        }
        k++;
        
    }

	return 0;
}
