#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long int ll;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==0){
            cout<<"NO";
        }
        else{
            if((ceil(log2(n)) == floor(log2(n)))){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        cout<<"\n";
    }
    return 0;
}
