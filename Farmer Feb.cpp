#include <iostream>
using namespace std;
int isPrime(int n){
    int count=0;
   for(int i=1;i<=n;i++){
       if(n%i==0){
           count++;
       }
   }
   if(count==2){
       return 1;
   }
   return 0;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z=1;
        cin>>x>>y;
       while(!isPrime(x+y+z)){
           z++;
       }
       cout<<z<<endl;
    }
	// your code goes here
	return 0;
}
