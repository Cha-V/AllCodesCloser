#include<bits/stdc++.h>
using namespace std;
int main(){
    int f[256]={0};
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        f[s[i]]++;
        if(f[s[i]]>1){
            s[i]='*';
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(s[i]!='*'){
            res++;
            //cout<<s[i]<<" ";
        }
    }
    if(res%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}