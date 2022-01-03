#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, flag=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<(2*n);i++){
            cin>>a[i];
        }
        for(int i=0;i<=(n);i++){
            if(a[i]!=a[i+n-1]){
                flag=1;
            }
        }
        if(flag){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<"\n";
    }
    return 0;
}