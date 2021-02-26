#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int count=0;
        //vector<int> v(n);
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        //sort(v.begin(),v.end());
         sort(arr,arr+n);
        for(i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
          }
      (count>0) ? cout<<count<<endl :cout<<0<<endl ;
       
    }
	// your code goes here
	return 0;
}
//By Vectors
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int count=0;
        vector<int> v(n);
        int v[n];
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++){
        if(v[i]==v[i+1]){
            count++;
        }
        }
      (count>0) ? cout<<count<<endl :cout<<0<<endl ;
       
    }
	// your code goes here
	return 0;
}
