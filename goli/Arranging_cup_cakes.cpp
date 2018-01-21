#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,y,ans=INT_MAX,rem=0,que=0,diff=0;
		cin>>n;
		ans=n-1;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				rem=n/i;
				ans=min(ans,rem-i);
			}
//			else
//				continue;
				
		}
		cout<<ans<<endl;
	}
	return 0;
}
