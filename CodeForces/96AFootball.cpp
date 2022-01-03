#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int key=0;
    for(int i=0;i<n && !key;i++){
        int j=i+1, k=1;
        while(j<n && s[j]==s[i]){
            k++;
            j++;
        }
        if(k>=7){
            key=1;
        }
    }
    if(key){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}