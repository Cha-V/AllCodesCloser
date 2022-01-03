#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length(), flag=1;
        if(isupper(s[0])){
            for(int i=0;i<n;i++){
            if(i%2==0){
                if(islower(s[i])){
                    flag=0;
                }
            }
            else if(isupper(s[i])){
                flag=0;
            }
        }
        }
        else{
            for(int i=0;i<n;i++){
            if(i%2==0){
                if(isupper(s[i])){
                    flag=0;
                }
            }
            else if(islower(s[i])){
                flag=0;
            }
        }
        }
        
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
	return 0;
}