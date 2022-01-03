#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int> q;
        while(n--){
            int a;
            cin>>a;
            if(a==0){
                int b;
                cin>>b;
                q.push(b);
            }
            else{
                cout<<q.front()<<" ";
                q.pop();
            }
        }
        cout<<"\n";
    }
    return 0;
}