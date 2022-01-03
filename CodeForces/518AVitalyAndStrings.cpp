#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin>>a>>b;
    int i=0;
    int n=a.length();
    i=n-1;
    while(i>=0){
        if(a[i]=='z'){
            a[i]='a';
        }
        else{
            a[i]++;
            break;
        }
        i--;
    }
    if(a>=b){
        cout<<"No such string";
    }
    else{
        cout<<a;
    }
    return 0;
}