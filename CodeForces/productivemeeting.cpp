#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, total=0;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        int low=0, high=n-1;
        while(low<high){
            if(b[low]<b[high]){
                cout<<b[low]<<" ";
                total+=b[low];
                b[high]-=b[low];
                b[low]=0;
                low++;
            }
            else{
                cout<<b[high]<<" ";
                total+=b[high];
                b[low]-=b[high];
                b[high]=0;
                high--;
            }
        }
        cout<<total<<"\n\n";
        for(int i=0;i<n;i++){
            b[i]=a[i];
        }
        low=0;
        high=n-1;
        while(low<high){
            if(b[low]<b[high]){
                total+=b[low];
                b[high]-=b[low];
                b[low]=0;
                //cout<<low+1<<" "<<high+1<<"\n";
                low++;
            }
            else{
                total+=b[high];
                b[low]-=b[high];
                b[high]=0;
                //cout<<low+1<<" "<<high+1<<"\n";
                high--;
            }
        }
    }
    return 0;
}