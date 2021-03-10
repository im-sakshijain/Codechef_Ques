#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int N,K;
        cin>>N>>K;
        (N>=K && K!=0) ?  cout<<N%K<<endl : cout<<N<<endl;
    }
	// your code goes here
	return 0;
}
