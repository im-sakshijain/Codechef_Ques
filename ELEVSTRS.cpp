#include <iostream>
#include <cmath>
using namespace std;
int timeMin(){
     int n,v1,v2;
        cin>>n>>v1>>v2;
        double t1=(sqrt(2)*n)/v1;
        double t2=(double(2*n)/v2);
        if(t1<t2){
            cout<<"Stairs"<<endl;
        }
        else{
            cout<<"Elevator"<<endl;
        }
}
int main() {
    int t;
    cin>>t;
    while(t--){
       timeMin();
       
    }
	// your code goes here
	return 0;
}

