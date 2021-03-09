#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x=0;
        cin>>n;
        while(n!=0){
            x = x+(n/100);
            n = n%100;
            x = x+(n/50);
            n = n%50;
            x = x+(n/10);
            n = n%10;
            x = x+(n/5);
            n = n%5;
            x = x+(n/2);
            n = n%2;
            x = x+(n);
            n = n%1;
        }
        cout<<x<<endl;
    }
	// your code goes here
	return 0;
}
