#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,l,m;
	cin>>k>>l>>m;
	int arr1[k],arr2[l],arr3[m];

	for(int i=0;i<k;i++)
	{
		cin>>arr1[i];
		
	}
	int m1=arr1[k-1];
	for(int i=0;i<l;i++)
	{
		cin>>arr2[i];
		
	}
	m1=max(m1,arr2[l-1]);
	for(int i=0;i<m;i++)
	{
		cin>>arr3[i];
		
	}
	
	m1=max(m1,arr3[m-1]);
	int arr[m1]={0};
	for(int i=0;i<k;i++)
	{
		arr[arr1[i]]++;
		
	}
	
	for(int i=0;i<l;i++)
	{
		arr[arr2[i]]++;
		
	}
	for(int i=0;i<m;i++)
	{
		arr[arr3[i]]++;	
	}
	int count=0;
	for(int i=0;i<m1;i++)
	{
		if(arr[i]>1)
		{
			count++;
		}
	}
	cout<<count<<"\n";
	for(int i=0;i<m1;i++)
	{
		if(arr[i]>1)
		{
			cout<<i<<"\n";
		}
	}
	
}
