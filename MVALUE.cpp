#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll arr[n];
        for( ll i = 0;i<n;i++) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans1 = (arr[n-1]*arr[n-2]) + max(arr[n-1]-arr[n-2],arr[n-2]-arr[n-1]);
        ll ans2 = (arr[0]*arr[1]) + max(arr[0]-arr[1],arr[1]-arr[0]);
        cout<<max(ans1,ans2)<<endl;
    }
	// your code goes here
	return 0;
}
