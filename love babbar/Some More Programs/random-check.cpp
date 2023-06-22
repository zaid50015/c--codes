#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	    string even;
	    for(int i=0;i<n;i+=2){
	       even.push_back(s[i]);
	    }
	    string odd;
	       for(int i=1;i<n;i+=2){
	      odd.push_back(s[i]);
	    }
	    sort(even.begin(),even.end());
	    sort(odd.begin(),odd.end());
	    if(odd==even){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}