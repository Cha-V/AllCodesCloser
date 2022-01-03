#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        vector<int> a;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            a.push_back(k);
        }
        sort(a.begin(), a.end());
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