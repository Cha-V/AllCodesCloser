#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

void printAllPivotIndices(int *arr, int n){
    int b[n];
    int res=0, flag=1;
    b[0]=arr[0];
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            if((b[n-1]-b[i])==0){
                cout<<0<<" ";
                flag=0;
            }
        }
        else if((i==(n-1))&&((n-2)>=0)){
            if(b[n-2]==0){
                cout<<n-1<<" ";
                flag=0;
            }
        }
        else{
            if(b[i-1]==(b[n-1]-b[i])){
                cout<<i<<" ";
                flag=0;
            }
        }
    }
    if(flag){
        cout<<-1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        printAllPivotIndices(a, n);
        cout<<"\n";
    }
    return 0;
}