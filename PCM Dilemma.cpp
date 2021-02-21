#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int phy=0,chem=0,math=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='P'){
                phy++;
            }
           else if(s[i]=='C'){
                chem++;
            }
            else if(s[i]=='M'){
                math++;
            }
         }
            if(phy==1&&chem==1&&math==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
    }
	// your code goes here
	return 0;
}
