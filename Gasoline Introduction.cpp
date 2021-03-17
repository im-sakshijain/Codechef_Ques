#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++) 
            cin>>arr[i];
    
       int gasoline = arr[0];
       int dist = 0;
       for(int i = 1;i<n;i++) {
           if(gasoline==0) 
            break;
           else {
               gasoline = gasoline-1+arr[i];
               dist ++;
           }
       }
       cout<<gasoline+dist<<endl;
    }
	// your code goes here
	return 0;
}
