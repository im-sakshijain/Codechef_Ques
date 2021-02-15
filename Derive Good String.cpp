#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int count=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        (s[i]==s[i+1])?count++:0;
       
    }
    cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
