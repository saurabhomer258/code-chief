#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long  int n,k;
		
		cin>>n>>k;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
			cin>>arr[i];
		if(k<=n/2)
		{
			sort(arr,arr+n);
		}
		else
		{
			sort(arr,arr+n,greater<int>());
		}
		long long int m1=0,m2=0;
		for(long long int i=0;i<n;i++)
		{
			if(i<k)
			{
				m1+=arr[i];	
				//	cout <<i;
			}	
			else
			{
				m2+=arr[i];
			}
		}
		m1-m2>0?cout<<m1-m2:cout<<m2-m1;
		cout<<"\n";
				
	}	
	
}
