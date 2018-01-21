#include<bits/stdc++.h>
using namespace std;
int rem(int a, char b[])
{
	int p=0;
	for(int i=0;b[i]!='\0';i++)
	{
		p = ((b[i]-'0')+p*10) %a;
	}
	return p;
}
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,ans;
		char b[400];
		cin>>a;
		cin>>b;
		if(a==0)
			cout<<b<<endl;
		else
		{
			ans=rem(a,b);
			cout<<gcd(a,ans)<<endl;
		}
			
	}
	return 0;
}
