#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];	
		}	
		int total=0,local=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j])
				{
					total++;		
				}	
			}
			if(arr[i]>arr[i+1] && i!=n-1)
			{
				local++;		
			}	
		}
		local==total?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
