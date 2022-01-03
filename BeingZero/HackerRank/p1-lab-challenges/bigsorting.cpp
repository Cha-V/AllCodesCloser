#include<bits/stdc++.h>
using namespace std;
bool comp(string x, string y){
    int xl=x.length();
    int yl=y.length();
    if(xl<yl){
        return true;
    }
    else if(xl>yl){
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
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n, comp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}