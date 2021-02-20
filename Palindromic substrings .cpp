#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int count=0;
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s2.size();j++){
                if(s1[i]==s2[j]){
                    count++;
                }
            }
        }
        string ans=(count>=1) ? "Yes":"No";
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
