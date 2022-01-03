#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max=0, c=0, t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        c-=a;
        c+=b;
        if(c>max)
            max=c;
    }
    cout<<max;
    return 0;
}