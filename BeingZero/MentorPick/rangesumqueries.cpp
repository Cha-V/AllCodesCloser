#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        b[0]=a[0];
        for(int i=1;i<n;i++){
            b[i]=b[i-1]+a[i];
        }
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            int l, r;
            cin>>l>>r;
            if(l>0){
                cout<<b[r]-b[l-1];
            }
            else{
                cout<<b[r];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
  	return 0;
}