#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        string s1="", s2="";
        
        for(int i=0;i<n/2;i++){
            s1+=s[i];
        }
        for(int i=n-n/2;i<n;i++){
            s2+=s[i];
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
      //cout<<s1<<" "<<s2<<"\n";
        if(s1==s2){
            cout<<"TRUE";
        }
        else{
            cout<<"FALSE";
        }
        
        cout<<"\n";
    }
	return 0;
}