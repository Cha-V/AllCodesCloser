#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void returnRunLengthEncoding(char src[], char dest[])
{
  //TODO:  Your Code Here
        int n;
        string res;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=0;j<n && flag;j++){
                int res = isSubstring(s[i], s[j]);
                if (res == -1)
                    flag=0;
            }
            if(flag){
                res=s[i];
                break;
            }
        }
        string result="";
        for(int i=1;i<res.length();i++){
            result+=res[i];
        }
        if(result!=""){
            cout<<result<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
}
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string res;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            int flag=1;
            for(int j=0;j<n && flag;j++){
                int res = isSubstring(s[i], s[j]);
                if (res == -1)
                    flag=0;
            }
            if(flag){
                res=s[i];
                break;
            }
        }
        string result="";
        for(int i=1;i<res.length();i++){
            result+=res[i];
        }
        if(result!=""){
            cout<<result<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}