#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long int x,y,k,n;
        cin>>x>>y>>k>>n;
        if(abs(x-y)%(2*k)== 0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
	// your code goes here
	return 0;
}
