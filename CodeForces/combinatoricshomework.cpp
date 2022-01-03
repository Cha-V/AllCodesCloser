#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, m;
        cin>>a>>b>>c>>m;
        int m1, m2, m3;
        if(a>b && a>c){
            m1=a;
            if(b>c){
                m2=b;
                m3=c;
            }
            else{
                m2=c;
                m3=b;
            }
        }
        else if(b>a && b>c){
            m1=b;
            if(a>c){
                m2=a;
                m3=c;
            }
            else{
                m2=c;
                m3=a;
            }
        }
        else{
            m1=c;
            if(a>b){
                m2=a;
                m3=b;
            }
            else{
                m2=b;
                m3=a;
            }
        }
        if(m==0){
            if(m1<=(m2+m3)){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else if(m1==m2 && m2==m3 && m1==1){
            cout<<"NO";
        }
        else{
            if((m1+m2+m3)>=m && (m1<=(m2+m3))){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        
        cout<<"\n";
    }
    return 0;
}