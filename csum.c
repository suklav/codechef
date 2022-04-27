#include<stdio.h>
#include<stdlib.h>
int find(int,int A[],int,int);
void mergesort(int a[],int i,int j,int);
void merge(int a[],int i1,int j1,int i2,int j2,int);
int main(){
	int T,N,K,*A,m,*ans,n=0,i,result;
	scanf("%d",&T);
	ans=(int *)malloc(T*sizeof(int));
	while(T--)
	{
		scanf("%d %d",&N,&K);
		A=(int *)malloc(N*sizeof(int));
		for(i=0;i<N;i++)
		scanf("%d",&A[i]);
		mergesort(A,0,N-1,N);
		result=binarySearch(A, 0, N - 1, K);
		for(i=0;i<result;i++)
		{
			m=binarySearch(A, 0, result - 1, K-A[i]);;
			if(A[m]==K-A[i] && m!=i)
			{
				ans[n]=1;
				break;
			}
			ans[n]=0;
		}
		n++;
	}
	for(i=0;i<n;i++)
	if(ans[i]==1)
	printf("Yes\n");
	else
	printf("No\n");
}
void mergesort(int a[],int i,int j,int N)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid,N);		
		mergesort(a,mid+1,j,N);	
		merge(a,i,mid,mid+1,j,N);	
	}
}
 
void merge(int a[],int i1,int j1,int i2,int j2,int N)
{
	int *temp;	
	int i,j,k;
	i=i1;	
	j=i2;	
	k=0;
	temp = (int *) malloc(2*N*sizeof(i));
	while(i<=j1 && j<=j2)	
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=j1)	
		temp[k++]=a[i++];
		
	while(j<=j2)	
		temp[k++]=a[j++];
		
	
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}
int binarySearch(int arr[], int l, int r, int x) 
{ 
    int mid = l + (r - l) / 2; 
	if (r >= l) { 
        
  
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return mid; 
} 
