#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		
		long long int n;
		cin>>n;
		long long int arr[n]={0};
		arr[1]=0;
		arr[2]=0;
		for(int i=2;i<=sqrt(n);i++)
		{
			if(arr[i]==0)
			{
				for(int j=i*i;j<=n;)
				{
					arr[j]=1;	
					j+=i;
				}	
			}
		}
		int count=0;
		for(int i=n;i>=1;i--)
		{
			if(arr[i]==0)
			{
				i=n-i;
				n=i;
				count++;
			}
		
		}
		count%2==0?cout<<"ALICE\n":cout<<"BOB\n";
		
	}
	return 0;
}
