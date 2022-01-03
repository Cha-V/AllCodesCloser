#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int ant=0, dan=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            ant++;
        }
        else{
            dan++;
        }
    }
    if(ant>dan){
        cout<<"Anton";
    }
    else if(dan>ant){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}