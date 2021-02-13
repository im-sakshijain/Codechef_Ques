#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,sum=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        string ans=(sum>m)?"YES":"NO";
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
