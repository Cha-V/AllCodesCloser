#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int freq[256]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            if(freq[s[i]]>1){
                cout<<s[i]<<"\n";
                break;
            }
        }
    }
    return 0;
}