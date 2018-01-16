#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,n,k;
	cin>>a>>n>>k;
	int k1=k;
	long long int arr[k]={0};
	long long int c=0;
	for(long long int i=0;i<a && k>0;i++)
	{
		c=0;
		arr[c]++;
		while(arr[c]>n && c<=k)
		{
			arr[c]=0;
			c++;
			arr[c]++;
			if(c==k)
			{
				if(arr[c-1]>n) {
				arr[c-1]=n;
				k--;	
				}
				break;
			}
		}
		
		
	}
	for(long long int i=0;i<k1;i++)
		{
			cout<<arr[i]<<" ";	
		}
	
	return 0;
}
