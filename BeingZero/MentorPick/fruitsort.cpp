#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int x, y;
    x=a.length();
    y=b.length();
    if(x<y){
        return true;
    }
    else if(x==y){
        if(a<=b){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n, cmp);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}