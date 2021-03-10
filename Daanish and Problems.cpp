#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int arr[10],K,i;
        for(i = 0;i<10;i++) {
            cin>>arr[i];
        }
        cin>>K;
        i = 9;
        while(K>=arr[i]) {
            K = K - arr[i];
            i--;
        }
        cout<<i+1<<endl;
    }
	// your code goes here
	return 0;
}
