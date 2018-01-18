#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum=n+k;
		int res;
		for(int i=sum+1;;i++)
		{
			int f=0;
			//cout<<"i";
			for(int j=i-1;j>1;j--)
			{
				if(i%j==0)
				{
					f=1;
					//cout<<i;
					break;
				}
			}
			if(f==0)
			{
				cout<<i-sum<<"\n";
				break;
			}
		}
		
	}
	return 0;
}
