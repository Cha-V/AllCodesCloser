#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n, m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    ll sum=0, idx=n-1;
    while(sum<=m && idx>=0){
        sum+=a[idx--];
    }
    cout<<sum;
    return 0;
}