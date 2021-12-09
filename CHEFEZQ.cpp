#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n,k;
	    long temp=0;
	    cin>>n>>k;
	    long arr[n];
	    for(int i=0 ; i<n ; i++)
	        cin>>arr[i];
	    for(int i=0 ; i<n ; i++)
	    {
	        temp=temp+arr[i];
	        if(temp<k)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
			temp=temp-k;
			
	    }
	    if(temp>=k)
	    {
	        temp=temp/k;
	        temp++;
	        cout<<temp+n<<endl;
	    }
	    
	    t--;
	}
	return 0;
}
