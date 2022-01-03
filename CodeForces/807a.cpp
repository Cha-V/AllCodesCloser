#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
            k=-1;
        }
    }
    if(k==-1){
        cout<<"rated\n";
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]<a[j]){
                    k=-1;
                }
            }
        }
        if(k==-1){
            cout<<"unrated\n";
        }
        else{
            cout<<"maybe\n";
        }
    }
    return 0;
}