#include <bits/stdc++.h>

#define MAX_SIZE 1000

using namespace std;

void mostFrequentCharacter(char s[])
{
  //TODO:  Your Code Here
    int a[256]={0};
    char res=s[0];
    for(unsigned int i=0;i<strlen(s);i++){
        a[(int)s[i]]++;
    }
    int max=a[(int)s[0]];
    for(unsigned int i=0;i<strlen(s);i++){
        if(a[(int)s[i]]>max){
            max=a[(int)s[i]];
            res=s[i];
        }
    }
    cout<<res<<" "<<max;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char* s;
        cin>>s;
        mostFrequentCharacter(s);
        cout<<"\n";
    }
    return 0;
}