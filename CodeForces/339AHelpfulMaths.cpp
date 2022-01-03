#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            v.push_back(int(s[i])-'0');
        }
    }
    sort(v.begin(), v.end());
    string res="";
    for(int i=0;i<v.size()-1;i++){
        res+=to_string(v[i]);
        res+="+";
    }
    res+=to_string(v[v.size()-1]);
    cout<<res;
    return 0;
}