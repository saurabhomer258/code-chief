#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,i,j,f,x,y;
    cin>>t;
    int a[100001];
    fill_n(a, 100001, 1);
	
	//int j;
	a[0]=0;
	a[1]=0;
	
	for(i=2;i*i<=100000;i++){
		if(a[i]==1){
			for(j=2*i;j<=100000;j+=i){
			a[j]=0;
		    }
	    }
	}
    while(t--){
        f=0;
        cin>>x>>y;
        x=x+y;
        for(i=x+1;i<=100000;i++){
            if(a[i]){
                f=1;
                break;
            }
        }
        if(f)
        cout<<i-x<<endl;
    }
    return 0;
} 


