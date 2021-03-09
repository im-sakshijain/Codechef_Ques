 #include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    string ans=(count==2) ? "Yes":"No";
    cout<<ans<<endl;
	// your code goes here
    }
	return 0;
}
//2nd soln
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,count = 0;
        cin>>n;
        if(n == 1 || n==0){
            cout<<"no"<<endl;
        }
        else{
        for(int i = 2;i<=sqrt(n);i++){
            if(n%i == 0){
                count++;
            }
        }
        if(count>0){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        }
    }
	// your code goes here
	return 0;
}
