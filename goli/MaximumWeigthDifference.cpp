using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int sum1=0,sum2=0;
	    if(k<=n/2){
	        for(int i=0;i<k;i++)
	            sum1+=arr[i];
	        for(int i=k;i<n;i++)
	            sum2+=arr[i];
	    }else{
	        for(int i=n-1;i>n-k-1;i--)
	            sum2+=arr[i];
	        for(int i=0;i<=n-k-1;i++)
	            sum1+=arr[i];
	    }
	    cout<<sum2-sum1<<"\n";

	}
}
