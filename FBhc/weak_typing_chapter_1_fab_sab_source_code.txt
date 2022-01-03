#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t, tt;
    cin>>t;
    for(tt=1;tt<=t;tt++){
        ll n, res=0, i, flag=-1;
        cin>>n;
        char s[n];
        for(i=0;i<n;i++){
            cin>>s[i];
        }
        for(i=0;i<n;i++){
            if(s[i]=='X'){
                if(flag==0){
                    res++;
                }
                flag=1;
            }
            else if(s[i]=='O'){
                if(flag==1){
                    res++;
                }
                flag=0;
            }
        }
        cout<<"Case #"<<tt<<": "<<res<<"\n";
    }
}