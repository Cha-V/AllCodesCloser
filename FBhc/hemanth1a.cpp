#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int q=1;q<=t;q++){
        long long int n;
        cin>>n;
        string strin;
        cin>>strin;
        long long int ans=0;
        char t=' ';
        for(int i=0;i<n;i++){
            if(strin[i]=='X'){
                if(t=='O') {
                   
                    ans++;
                   
                }
                t='X';
            }
            else if(strin[i]=='O'){
                if(t=='X') {
                   
                    ans++;
                }
                t='O';
            }
        }
        cout<<"Case #"<<q<<": "<<ans<<"\n";
    }
}