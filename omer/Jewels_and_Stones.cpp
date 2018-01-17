#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1;
	
		cin>>s2;
		map<char,int> m;
		int count=0;
		for(int i=0;s2[i]!='\0';i++)
		{
			m[s2[i]]++;
		}
		for(int i=0;s1[i]!='\0';i++)
		{
			if(m[s1[i]]>0)
			{
				count++;	
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
