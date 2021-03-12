#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n,fact=1;
        cin>>n;
        for(long long i = 1;i<=n;i++) {
            fact=i*fact;
        }
        cout<<fact<<endl;
    }
	// your code goes here
	return 0;
}
