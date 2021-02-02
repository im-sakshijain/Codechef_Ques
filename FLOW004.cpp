#include <iostream>
using namespace std;
int firstInt(int n){
    while(n>=10){
        n=n/10;
    }
    return n;
}
int lastInt(int n){
    return n%10;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=firstInt(n)+lastInt(n);
        cout<<m<<endl;
    }
	// your code goes here
	return 0;
}
