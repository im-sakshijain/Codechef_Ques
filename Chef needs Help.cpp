#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> v1;
    while(cin>>s){
        v1.push_back(s);
    }
     cout<<v1.back().size()<<endl;
	return 0;
}
