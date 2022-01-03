#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, i, sum=0, count=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]!='0'){
                count++;
                string temp="";
                temp+=s[i];
                stringstream geek(temp);
                ll ttemp=0;
                geek>>ttemp;
                sum+=ttemp;
            }
        }
        if(s[n-1]!='0'){
            count--;
        }
        sum+=count;
        cout<<sum<<"\n";
    }
    return 0;
}