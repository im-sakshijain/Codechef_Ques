#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
    int n,sum = 0;
    cin>>n;
    string s; cin>>s;
    for(int i = 0;i<n;i++) {
        if(s[i] == '1') sum++;
    }
    float ans = (float(120-n+sum)/120);
    if(ans>=0.75) {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
	// your code goes here
	return 0;
}
