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
		int count=1;
		cin>>arr[0];
		int var=arr[0];
		for(int i=1;i<n;i++)
		{
			cin>>arr[i];
		//	cout<<min(var,arr[i]);
			if(arr[i]==min(var,arr[i]))
			{
				var=arr[i];
				count++;
			}
		}
		cout<<count<<"\n";
		
	}
}
