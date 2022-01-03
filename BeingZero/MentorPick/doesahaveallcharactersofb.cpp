#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    while(cin>>a){
        int afreq[256]={0};
        int bfreq[256]={0};
        cin>>b;
        for(int i=0;i<a.length();i++){
            afreq[a[i]]++;
        }
        for(int i=0;i<b.length();i++){
            bfreq[b[i]]++;
        }
        int flag=1;
        for(int i=0;i<b.length();i++){
            if(afreq[b[i]]<bfreq[b[i]]){
                flag=0;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
        }
        
	return 0;
}
