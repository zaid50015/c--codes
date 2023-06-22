#include <iostream>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string str;
	    cin>>n>>str;
	    int count=0;
	    for(int i=0;i<n;i++){
	        char ch=str[i];
	  
	        if(ch!='a' && ch!='e' && ch!='i'&& ch!='o'&& ch!='u'){
	            count++;
	            if(count>=4){
	                cout<<"NO"<<endl;
	               break;
	            }
	        }
	        else{
	            count=0;
	        }
	    }
        if(count<4)
	    cout<<"YES"<<endl;
	}
	return 0;
}