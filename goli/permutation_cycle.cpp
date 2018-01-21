#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;	`
		cin>>n;
		int arr[n],res[n]={0};
		res[1]=1;
		for(int i=1;i<=n;i++)
		cin>>arr[i];
		
		for(int i=1;i<=n;i++)
		{
			if(res[i]==0)
			{
				i=arr[i]; 
				res[i]=1;					
			}
			else
			{
				count++;
				i++;					
			}
		}
		
	}
	return 0;
}
