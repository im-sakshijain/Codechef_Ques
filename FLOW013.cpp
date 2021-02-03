#include <iostream>
using namespace std;
void triangle(){
    int l,m,n;
    cin>>l>>m>>n;
    if(l+m+n==180){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        triangle();
    }
	// your code goes here
	return 0;
}
