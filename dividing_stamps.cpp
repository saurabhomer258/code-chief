#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int sum=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=(sum+arr[i]);
	}
	n=((n*(n+1))/2);
	if(n==sum)
		cout<<"YES";
	else
		cout<<"NO";
}
