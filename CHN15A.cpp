#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,m,ans=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>m;
            if((m+k)%7==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
