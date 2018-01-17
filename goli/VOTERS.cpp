#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    map<int,int> mp;
    map<int,int> :: iterator m;
    vector<int> l1,l2,l3,l4;
    vector<int> :: iterator it;
    int x;
    for(int i=0;i<n1;i++)
    {
        cin>>x;
        l1.push_back(x);
        mp[l1[i]]++;
    }

    for(int i=0;i<n2;i++)
    {
        cin>>x;
        l2.push_back(x);
        mp[l2[i]]++;
    }

    for(int i=0;i<n3;i++)
    {
        cin>>x;
        l3.push_back(x);
        mp[l3[i]]++;
    }
    int c=0;
    for(m=mp.begin();m!=mp.end();++m)
    {
        if(m->second>1)
        {
            c++;
            x=m->first;
            l4.push_back(x);
            //cout<<m->first<<endl;//" "<<m->second<<endl;
        }

    }
    cout<<c<<endl;
    for(it=l4.begin();it!=l4.end();++it)
    cout<<*it<<endl;

    return 0;
}
