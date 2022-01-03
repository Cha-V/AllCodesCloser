#include <bits/stdc++.h>
#include <iterator>
#include <map>
using namespace std;
typedef long long int ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n, x, i;
        cin>>n>>x;
        ll a[n];
        map<ll, ll> am;
        for(i=0;i<n;i++){
            ll k, temp;
            cin>>k;
            if(!((am.find(k) == am.end()))){
                am[k]++;
            }
            else{
                am[k]=1;
            }
        }
        for(auto aut:am){
            
        }
    }
	return 0;
}
