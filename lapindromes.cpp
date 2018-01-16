#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int mid=len/2;
        map <char,int> m;
        for(int i=0;s[i]!='\0';i++)
        {
        	if(i<mid)
        	{
        		m[s[i]]++;
			}
			if(i==mid && len%2==0)
			{
				m[s[i]]--;
			}
			if(i>mid)
			{
				m[s[i]]--;
			}
			
		}
		int f=1;
		for(int i=0;s[i]!='\0';i++)
        {
        //	cout<<m[s[i]];
        	
        	if(i==mid && len%2!=0)
				continue;
			if(m[s[i]]!=0)
			{
				f=0;
				break;
			}	
        }
		if(f==1)
		{
			cout<<"YES";	
		}
		else
		{
			cout<<"NO";
		}
    	cout<<"\n";
    }
}

