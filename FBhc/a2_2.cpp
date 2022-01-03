#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll result(char s[], ll n){
    ll res=0, i, flag=-1;
    for(i=0;i<n;i++)
    {
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
    return res;
}
ll subString(char str[], int n)
{
    ll res=0, len, i, j, k;
    for (len = 1; len <= n; len++)
    {
        for (i = 0; i <= n - len; i++)
        {
            j = i + len - 1;   
            char arr[j-i+1];        
            for (k = i; k <= j; k++)
                arr[k-i]=str[k];
            res+=result(arr, j-i+1);
        }
    }
    return res;
}
int main(){
    ll t, tt;
    cin>>t;
    for(tt=1;tt<=t;tt++){
        ll n, i, res=0;
        cin>>n;
        char s[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>s[i];
            b[i]=0;
        }
        res=subString(s, n);
        cout<<"Case #"<<tt<<": "<<res<<"\n";
    }
}