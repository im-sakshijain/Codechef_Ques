#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n,sum=0;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
	// your code goes here
	return 0;
}
