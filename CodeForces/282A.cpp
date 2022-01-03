#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k=0;
    while(t--){
        
        string s;
        cin>>s;
        if(s[1]=='+'){
            k++;
        }
        else{
            k--;
        }
    }
    cout<<k;
    return 0;
}