TREE2#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        set<int> ans;
        while(n--) {
            int h;
            cin>>h;
            if(h>0)
            ans.insert(h);
        }
        cout<<ans.size()<<endl;
   
    }
	// your code goes here
	return 0;
}
