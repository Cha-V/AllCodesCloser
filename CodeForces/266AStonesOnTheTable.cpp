#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, res=0;
    string s;
    cin>>n>>s;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            res++;
        }
    }
    cout<<res;
    return 0;
}