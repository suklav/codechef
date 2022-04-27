#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    
    float bal,chr=0.5;
    int wdl;
    cin>>wdl>>bal;
    
    if((wdl%5!=0)|(wdl>2000))
    {
        cout<< setprecision (2) << fixed <<bal;
        return 0;
    }
    
    else if((wdl+chr)>bal)
    {
        cout<< setprecision (2) << fixed <<bal;
        return 0;
    }
    
    bal=bal-wdl-chr;
    cout<< setprecision (2) << fixed <<bal;
	// your code goes here
	return 0;
}
