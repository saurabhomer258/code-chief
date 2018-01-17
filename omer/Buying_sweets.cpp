#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int sum=0;
		int arr[n];
		for(int i=0;i<n;i++)
		{
				cin>>arr[i];
				sum+=arr[i];
		}	
		int x=sum%k;
		int flag=0;	
		for(int i=0;i<n;i++)
		{
			if(arr[i]<=x)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"-1\n";
		else
			cout<<(int)sum/k<<"\n";
	}
}
