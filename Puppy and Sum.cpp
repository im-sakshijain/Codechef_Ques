#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n,ans=0;
        cin>>m>>n;
       while(m--){
           ans=0;
           for(int i=1;i<=n;i++){
               ans+=i;
           }
           n=ans;
       }
       cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
