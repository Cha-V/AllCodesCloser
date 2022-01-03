#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string kk;
    getline(cin, kk);
    while(t--){
        string s;
        getline(cin, s);
        int n=s.length();
        int l=0, u=0;
        for(int i=0;i<n;i++){
            if(isupper(s[i])){
                u++;
            }
            else if(islower(s[i])){
                l++;
            }
        }
        cout<<l<<" "<<u<<"\n";
    }
	return 0;
}