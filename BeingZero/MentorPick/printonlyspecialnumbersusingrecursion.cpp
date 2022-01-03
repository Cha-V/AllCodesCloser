#include<bits/stdc++.h>
using namespace std;
void printspecial(int a[], int n, int k){
    if(a[k]%10==0){
        cout<<a[k]<<" ";
    }
    if((k+1)<n){
        printspecial(a, n, k+1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        printspecial(a, n, 0);
        cout<<"\n";
    }
	return 0;
}