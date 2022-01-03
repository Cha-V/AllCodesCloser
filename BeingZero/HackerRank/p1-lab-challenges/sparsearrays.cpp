#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    map<string, int> m;

    for(int i=0;i<n;i++){
        string k;
        cin>>k;
        if (m.find(k) == m.end()){
            m[k]=1;
        }
        else{
            m[k]++;
        }
    }
    int q;
    cin>>q;
    string b[q];
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    for(int i=0;i<q;i++){
        cout<<m[b[i]]<<"\n";
    }
    cout<<"\n";
    return 0;
}