#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,sumeven=0,sumodd=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            (i%2==0)?sumeven+=arr[i]:sumodd+=arr[i];
        }
        cout<<(sumeven-sumodd)<<endl;
    }
	// your code goes here
	return 0;
}
