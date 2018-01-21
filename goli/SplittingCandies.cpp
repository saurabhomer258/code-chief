#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n;
		cin>>k;
		
		if(k==0)
		{
			cout<<k<<" "<<n<<endl;
		}
		else
		{
			cout<<n/k<<" "<<n%k<<endl;
		}
	}
	return 0;
}
