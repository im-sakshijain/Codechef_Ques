#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countlower=0,countupper=0,countnumeric=0,countspecial=0;
        for(int i=1;i<s.length()-1;i++){
            if(s[i]>=97 && s[i]<=122){
                countlower++;
            }
            else if(s[i]>=65 && s[i]<=90){
                countupper++;
            }
            else if(s[i]>=48 && s[i]<=57){
                countnumeric++;
            }
            else if(s[i]==64||s[i]==63||s[i]==35||s[i]==37||s[i]==38){
                countspecial++;
            }
        }
        if(s[0]>=97&&s[0]<=122||s[s.length()-1]>=97&&s[s.length()-1]<=122)
        countlower++;
        if(s.length()>=10 && countlower>0 && countupper>0 && countnumeric>0 && countspecial>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
