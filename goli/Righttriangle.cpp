#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int f=0;
	while(t--)
	{
	    long long int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    cout<<y3;
	    long long int a,b,c;
	    a=pow((x2-x1),2)+pow((y2-y1),2);
	    b=pow((x3-x1),2)+pow((y3-y1),2);
	    c=pow((x2-x3),2)+pow((y2-y3),2);

	    cout<<"\n"<<a<<" "<<b<<" "<<c<<endl;
	    if(a==c+b || b==a+c || c==a+b)
            f++;
	}

        cout<<f<<endl;
        cout<<pow(5-5,2);



	return 0;
}
