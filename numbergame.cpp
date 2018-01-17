#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		long long int chance=0;
		cin>>n;
		if(n==1)
		{
			cout<<"AlICE";
		}
		else if(n==2)
		{
			cout<<"BOB";
		}
		else
		{
			for(long long int i=n;i>1;i--)
			{
				int flag=0;
				long long int j=i-1;
				for(j=i-1;j>1;j--)
				{
					if(i%j==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<i<<" "<<j<<" ";
					n=n-i;
					i=n;
					cout<<i<<"\n";
					chance++;
					if(i<1)
					{
						break;
							
					}
				}
			}
			chance%2==0?cout<<"ALICE":cout<<"BOB";
			cout<<"\n";
		}
	}
	return 0;
}
