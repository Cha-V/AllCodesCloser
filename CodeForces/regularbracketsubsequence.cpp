#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            string res="";
            for(int j=0;j<i;j++){
                res+='(';
            }
            for(int j=0;j<i;j++){
                res+=')';
            }
            for(int j=0;j<n-i;j++){
                res+="()";
            }
            cout<<res<<"\n";
        }
    }
    return 0;
}