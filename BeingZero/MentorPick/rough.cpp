#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a,b;
    cin>>a>>b;
    string ans="";
    ans+=a[0];
    int i=1,j,f=0,l=0;
    while(i<a.length()){
        if(a[i]<=b[0]){
            ans+=a[i];
            i++;
        }
        else break;
    }
    ans+=b[0];
    cout<<ans<<"\n";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}