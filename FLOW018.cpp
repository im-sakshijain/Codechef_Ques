#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m=1;
        cin>>n;
        for(int i=1;i<=n;i++){
           m*=i;
        }
        cout<<m<<endl;
    }
	// your code goes here
	return 0;
}
