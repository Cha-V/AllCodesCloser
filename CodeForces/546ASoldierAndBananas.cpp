#include<bits/stdc++.h>
using namespace std;
typedef long long int ull;
int main(){
    ull k, n, w, res=0, val=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        val=i*k;
        res+=val;
    }
    res-=n;
    if(res<0){
        res=0;
    }
    cout<<res;
    return 0;
}