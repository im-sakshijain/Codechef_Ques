#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int D,C,sumfirst=0,sumsecond=0;
        cin>>D>>C;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        sumfirst=a1+a2+a3;
        sumsecond=b1+b2+b3;
        if(sumfirst>=150 && sumsecond>=150){
            ((sumfirst+sumsecond+D+D)>(sumfirst+sumsecond+C)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
        else if(sumfirst>=150 || sumsecond>=150){
            ((sumfirst+sumsecond+D+D)>(sumfirst+sumsecond+D+C)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
