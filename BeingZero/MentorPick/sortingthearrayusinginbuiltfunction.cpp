#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(int i=0;i<q;i++){
            int k;
            cin>>k;
            if(k<0 || k>=n){
                cout<<-1<<" ";
            }
            else{
                cout<<a[k]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}