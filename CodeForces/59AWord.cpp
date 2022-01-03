#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, sl, su;
    cin>>s;
    int n=s.length();
    sl=s;
    su=s;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    int ll=0, uu=0;
    for(int i=0;i<n;i++){
        if(s[i]==sl[i]){
            ll++;
        }
        else{
            uu++;
        }
    }
    if(uu>ll){
        cout<<su;
    }
    else{
        cout<<sl;
    }
    return 0;
}