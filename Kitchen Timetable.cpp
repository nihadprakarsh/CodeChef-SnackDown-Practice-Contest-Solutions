#include <iostream>
using namespace std;

int main() {
	long int t,n ;
	cin>>t;
	while(t--)
	{   long int c=0;
	    cin>>n;
	    long int ar1[n+1],ar2[n];
	    ar1[0]=0;
	    for(long int i=1;i<n+1;i++)
	    {
	        cin>>ar1[i];
	    }
	    
	    for(long int i=0;i<n;i++)
	    {
	        cin>>ar2[i];
	    }
	    for(long int i=0;i<n;i++)
	    {
	        if(ar2[i]<=ar1[i+1]-ar1[i])
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}