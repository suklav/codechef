#include <iostream>
using namespace std;

int main() {
    
    int t,n,sum=0;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        while(n!=0)
        {
            sum=sum+(n%10);
            n/=10;
            
            
        }
        cout<<sum<<endl;
        sum=0;
    }
    
    
	// your code goes here
	return 0;
}
