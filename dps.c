#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    char S[10000];
	    scanf("%s",&S);
	    n=strlen(S);
	    int A[26]={0},i,count=0;
	    if(n<4)
	    {
	        printf("DPS\n");
	    }
	    else
	    {
	        if(n%2==0)
	        {
	            for(i=0;i<n;i++)
	            {
	                int x=S[i]-'a';
	                A[x]++;
	            }
	            for(i=0;i<26;i++)
	            {
	                if(A[i]%2!=0)
	                count++;
	            }
	            if(count==2)
	            printf("DPS\n");
	            else
	            printf("!DPS\n");
	        }
	        else
	        {
	              for(i=0;i<n;i++)
	            {
	                int x=S[i]-'a';
	                A[x]++;
	            } 
	            for(i=0;i<26;i++)
	            {
	                if(A[i]%2!=0)
	                count++;
	            } 
	            if(count==1||count==3)
	            printf("DPS\n");
	            else
	            printf("!DPS\n");
	        } 
	    } 
	}
	return 0;
}

