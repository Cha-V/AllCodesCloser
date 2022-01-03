#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
int main() {
    ull t;
    cin>>t;
    while(t--){
        ull n, digits=0, result=0;
        cin>>n;
        string res="";
        while(digits<n-1){
            res+='1';
            digits++;
        }
        if(n==1){
            res="3";
        }
        else{
            ull rem=((n-1)%3);
            //cout<<rem<<" ";
            rem=(3-rem);
            //cout<<rem<<" ";
            if(((n-1)+rem)%9==0){
                rem+=3;
                //cout<<" a ";
            }
            if((rem)%2!=0){
                res+=to_string(rem);
                //cout<<" b ";
            }
            else{
                string ans="";
                ans+=to_string(rem);
                res[res.length()-1]=ans[0];
                res+='1';
                //cout<<" c ";
            }
        }
        cout<<res<<"\n";
    }
	return 0;
}
