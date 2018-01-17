
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int findSum(int N)
{
    int ans = 0;

    for (int i = 1; i <= N;i++)
        ans += (i%mod);
 //cout<<"ans"<<ans<<endl;
    return ans;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += (arr[i]%mod);
	}
//	cout<<"sum"<<sum<<endl;
	int tmp = findSum(n);
	if(tmp == sum)
		cout<<"YES";
	else
		cout<<"NO";
}
