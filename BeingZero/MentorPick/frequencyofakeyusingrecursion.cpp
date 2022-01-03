#include<bits/stdc++.h>
using namespace std;
int cnt;
void freq(int a[], int n, int k){
    if(a[n-1]==k){
        cnt++;
    }
    if(n!=0){
        freq(a, n-1, k);
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
        int q;
        cin>>q;
        int b[q];
        for(int i=0;i<q;i++){
            cin>>b[i];
        }
        for(int i=0;i<q;i++){
            cnt=0;
            freq(a, n, b[i]);
            cout<<cnt<<" ";
        }
        cout<<"\n";

    }
	return 0;
}