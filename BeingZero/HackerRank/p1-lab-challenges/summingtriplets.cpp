#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;
    cin>>t;
    ll a[t][3];
    for(ll i=0;i<t;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(ll i=0;i<t;i++){
        cout<<a[i][0]+a[i][1]+a[i][2]<<"\n";
    }
    return 0;
}
