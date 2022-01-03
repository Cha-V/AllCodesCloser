#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, res="";
    cin>>s;
    int n=s.length();
    vector<char> v;
    v.push_back('a');
    v.push_back('e');
    v.push_back('i');
    v.push_back('o');
    v.push_back('u');
    v.push_back('y');
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<n;i++){
        if(find (v.begin(), v.end(), s[i])==v.end()){
            res+=".";
            res+=s[i];
        }
    }
    cout<<res;
    return 0;
}