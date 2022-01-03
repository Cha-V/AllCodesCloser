#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r, c, sr, tr;
        cin>>r>>c>>sr>>tr;
        int a[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<c;i++){
            int temp=a[sr][i];
            a[sr][i]=a[tr][i];
            a[tr][i]=temp;
            
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
      cout<<"\n";
    }
    return 0;
}