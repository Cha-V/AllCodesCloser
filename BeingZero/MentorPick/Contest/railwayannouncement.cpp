#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cout<<"ZERO";
            }
            else if(s[i]=='1'){
                cout<<"ONE";
            }
            else if(s[i]=='2'){
                cout<<"TWO";
            }
            else if(s[i]=='3'){
                cout<<"THREE";
            }
            else if(s[i]=='4'){
                cout<<"FOUR";
            }
            else if(s[i]=='5'){
                cout<<"FIVE";
            }
            else if(s[i]=='6'){
                cout<<"SIX";
            }
            else if(s[i]=='7'){
                cout<<"SEVEN";
            }
            else if(s[i]=='8'){
                cout<<"EIGHT";
            }
            else if(s[i]=='9'){
                cout<<"NINE";
            }
            if(i!=(s.length()-1)){
                cout<<" ";
            }
    }
        cout<<"\n";
    }
	return 0;
}