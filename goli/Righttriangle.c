#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,x2,y1,y2,z1,z2;
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	    int a,b,c;
	    a=pow(y1-x1)+pow(y2-x2);
	    b=pow(z1-y1)+pow(z2-y2);
	    c=pow(z1-x1)+pow(z2-x2);

	    cout<<a<<b<<c<<endl;



	}
	return 0;
}
