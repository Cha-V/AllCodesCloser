#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, total=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]+k<=5){
            total++;
        }
    }
    cout<<floor(total/3)<<"\n";
    return 0;
}