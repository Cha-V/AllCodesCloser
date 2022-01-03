#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[t][3];
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<t;i++){
        int count=0;
        for(int j=0;j<3;j++){
            count+=a[i][j];
        }
        if(count>1){
            sum++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}