#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(string x, string y){
    int n=x.length();
    int m=y.length();
    if(n<m){
        return true;
    }
    else if(n>m){
        return false;
    }
    else{
        if(x<y){
            return true;
        }
        else{
            return false;
        }
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, comp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
