#include <bits/stdc++.h>

using namespace std;

int maxContiguousSubArraySum(int a[], int n){
    // TODO: Your Code Here
    int b[n];
    b[0]=a[0];
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
    }
    int max=b[0];
    for(int l=0;l<n;l++){
        for(int r=l;r<n;r++){
            int sum=0;
            if(l>0){
                sum+=(b[r]-b[l-1]);
            }
            else{
                sum+=b[r];
            }
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
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
    cout<<maxContiguousSubArraySum(a, n)<<"\n";
    }
    
    return 0;
}