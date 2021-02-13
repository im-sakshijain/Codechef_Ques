#include<bits/stdc++.h> 
using namespace std;
void max_array_kth_max(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
   cout<<arr[n-1]<<endl;
   cout<<arr[n-k]<<endl;
}
int main() {
    max_array_kth_max();
	// your code goes here
	return 0;
}
