#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		int f=0;
		if(n.length()>2)
		{
			for(int i=0;i<n.length()-2;i++)
			{
				if(n[i]!=n[i+1] && n[i+1]!=n[i+2])
				{
					f=1;
					break;
				}
			}
		}
		f==1?cout<<"Good":cout<<"Bad";
		cout<<"\n";
	}
}
