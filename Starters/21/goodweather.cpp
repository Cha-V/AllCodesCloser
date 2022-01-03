#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r=0, s=0;
	    int a[7];
	    for(int i=0;i<7;i++){
	        cin>>a[i];
	        if(a[i]==0){
	            r++;
	        }
	        else{
	            s++;
	        }
	        
	    }
	    if(s>r){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	    cout<<"\n";
	}
	return 0;
}

