#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
      int n,ones=0,onesOfs2=0;
      cin>>n;
      string s,s2;
      cin>>s>>s2;
      for( int i = 0;i<n;i++) {
          if(s[i]=='1') {
              ones++;
          }
      }
        for( int j = 0;j<n;j++) {
          if(s2[j]=='1') {
              onesOfs2++;
          }
      }
      (ones == onesOfs2) ? cout<<"YES"<<endl :  cout<<"NO"<<endl;
      
      
    }
	// your code goes here
	return 0;
}
