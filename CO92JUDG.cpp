#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int alice[n],bob[n],sum=0,sumBob=0;
        for(int i=0;i<n;i++){
            cin>>alice[i];
            sum+=alice[i]
        }
         sort(alice,alice+n);
         sum-=alice[n-1];
        for(int i=0;i<n;i++){
            cin>>bob[i];
            sumBob+=bob[i];
        }
        sort(bob,bob+n);
        sumBob-=bob[n-1];
        if(sum>sumBob){
            cout<<"Bob"<<endl;
        }
        else if(sum<sumBob){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
	// your code goes here
	return 0;
}
