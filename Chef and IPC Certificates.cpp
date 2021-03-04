#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M,K,q,ans=0;
    cin>>N>>M>>K;
    while(N--){
         int sum=0;
        for(int i=0;i<K;i++){
            int temp;
            cin>>temp;
            sum+=temp;
        }
        cin>>q;
        if(sum>=M && q<=10){
            ans++;
        }
        
    }
      cout<<ans<<endl;
	// your code goes here
	return 0;
}
