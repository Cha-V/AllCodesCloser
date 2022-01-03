#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t;
    cin>>t;
    while(t--){
        int m, n;
        cin>>m>>n;
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int target, flag=0;
        cin>>target;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==target){
                    flag=1;
                    break;
                }
            }
        }
        if(flag){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
        cout<<"\n";
    }
    return 0;
}
