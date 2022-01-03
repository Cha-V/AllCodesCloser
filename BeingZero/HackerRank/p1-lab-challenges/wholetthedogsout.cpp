#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n);
        cout<<"Case #"<<tt<<": "; 
        for(int i=n-1;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
