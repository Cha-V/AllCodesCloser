#include<bits/stdc++.h>
using namespace std;
string glob;
bool comp(char a, char b){
    int x=glob.find(a);
    int y=glob.find(b);
    if(x<=y){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        glob=s;
        int q;
        cin>>q;
        for(int i=0;i<q;i++){
            string temp;
            cin>>temp;
            sort(temp.begin(), temp.end(), comp);
            cout<<temp<<" ";
        }
        cout<<"\n";
    }
    return 0;
}