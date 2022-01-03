#include<bits/stdc++.h>
using namespace std;
void reverseWords(char s[])
{
    int n=strlen(s), spaces=0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            spaces++;
        }
        cout<<s[i]<<" ";
    }
    string arr[spaces];
    int j=0;
    for(int i=0;i<spaces;i++){
        string k="";
        if(s[j]!=' '){
            k+=s[j];
        }
        j++;
        arr[i]=k;
    }
    for(int i=0;i<spaces;i++){
        cout<<arr[i]<<"\n";
    }
}