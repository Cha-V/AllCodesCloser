#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s[n], e[n];
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
        }
        pair<int, int> pairt[n];
        for(int i=0;i<n;i++){
            pairt[i].first=e[i];
            pairt[i].second=s[i];
        } 
        sort(pairt, pairt+n);
        for(int i=0;i<n;i++){
            e[i]=pairt[i].first;
            s[i]=pairt[i].second;
        }
        for(int i=0;i<n;i++){
            printf("(%d, %d) ", s[i], e[i]);
        }
        cout<<"\n";
    }
    return 0;
}