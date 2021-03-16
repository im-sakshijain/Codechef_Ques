#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        int count = 0;
        for(int i = 0;i<s.size();i++) {
            if(s[i]=='7') {
                cout<<"True"<<endl;
                count=1;
                break;
            }
        }
        if(count == 0) {
            cout<<"False"<<endl;
        }
       
    }
	// your code goes here
	return 0;
}
