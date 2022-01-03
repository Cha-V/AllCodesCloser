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
        int n=s.length(), v=0;
        for(int i=0;i<n;i++){
            if((s[i]=='a')||(s[i]=='A')||(s[i]=='e')||(s[i]=='E')||(s[i]=='i')||(s[i]=='I')||(s[i]=='o')||(s[i]=='O')||(s[i]=='u')||(s[i]=='U')){
                v++;
            }
        }
        cout<<v<<"\n";
    }
	return 0;
}   