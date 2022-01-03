#include<bits/stdc++.h>
using namespace std;

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
        for(int i=0;i<n;i++){
            int flag=1;
            for(int len=1;len<=n-1 && i!=n-1 && flag;len++){
                for(int j=i;j<i+len && j<n;j++){
                    cout<<a[j]<<" ";
                    if(j==(n-1)){
                        flag=0;
                    }
                }
                cout<<"\n";
            }
            if(i==0){
                for(int j=0;j<n;j++){
                    cout<<a[j]<<" ";
                }
                cout<<"\n";
            }
            if((i==(n-1)) && n>1 ){
                cout<<a[i]<<"\n";
            }
        }
        cout<<"\n";
    }
	return 0;
}