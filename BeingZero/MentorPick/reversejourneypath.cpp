#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            cout<<a[i];
            if(i!=(0)){
                cout<<"->";
            }
        }
        cout<<"\n";
    }
    return 0;
}