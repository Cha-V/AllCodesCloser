#include<bits/stdc++.h>
using namespace std;
void pairsort(int a[], int b[], int n){
    pair<int, int> pairt[n];
    for(int i=0;i<n;i++){
        pairt[i].first=a[i];
        pairt[i].second=b[i];
    } 
    sort(pairt, pairt+n);
    for(int i=0;i<n;i++){
        a[i]=pairt[i].first;
        b[i]=pairt[i].second;
    }
}
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
        pairsort(s, e, n);
        for(int i=0;i<n;i++){
            printf("(%d, %d) ", s[i], e[i]);
        }
        cout<<"\n";
    }
    return 0;
}