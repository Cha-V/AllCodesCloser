#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll count=0, n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}