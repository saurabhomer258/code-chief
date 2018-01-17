#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	long long int count=0;
	cin>>t;
	while(t--)
	{
		long long int  a,b,c;
		long long int x1,y1,x2,x3,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=pow(x2-x1,2)+pow(y2-y1,2);
		b=pow(x3-x1,2)+pow(y3-y1,2);
		c=pow(x2-x3,2)+pow(y2-y3,2);
	//	cout<<"\n"<<a<<" "<<b<<" "<<c<<" \n";
		if(a==c+b ||  b==c+a || c== a+b)
		{
			
			count++;
		}
	}
	cout<<count<<"\n";
	return 0;
}
