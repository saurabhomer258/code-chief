#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int g;
	    cin>>g;
	    while(g--)
	    {
	    	long long int l,n,q;
	    	cin>>l>>n>>q;
	    	long long int count=0;
	    	long long int arr[n];
	    	if(n%2==0)
	    	{
	    		count=(n/2);
	    	}
	    	else
	    	{
	    		if(q==l)
	    		{
	    			count=(n/2);
				}
				else
				{
					count=(n/2)+1;
				}
			}
			cout<<count<<"\n";
			
	    	
		}
	}
	    
	return 0;
}
