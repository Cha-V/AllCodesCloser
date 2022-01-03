#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin>>s>>t;
    int key=1;
    int x, y;
    x=s.length();
    y=t.length();
    if(x!=y){
        key=0;
    }
    int i=0;
    int j=x-1;
    while(i<x && j>=0 && key){
        if(s[i]!=t[j]){
            key=0;
            //cout<<i<<" "<<j;
        }
        i++;
        j--;
    }
    if(key){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}