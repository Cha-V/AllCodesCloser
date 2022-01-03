#include<bits/stdc++.h>
using namespace std;
char *replaceSpace(char *s, char *p)
{
  	// TODO:  Fill in your code here
    char* res=(char*)"";
    int sn=sizeof(s)/sizeof('a');
    int pn=sizeof(p)/sizeof('a');
    
    for(int i=0;i<sn;i++){
        if(s[i]==' '){
            for(int j=0;j<pn;j++){
                res+=p[i];
            }
        }
        else{
            res+=s[i];
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        char* s=malloc(sizeof(char)*MAX_LEN);
        char* r=malloc(sizeof(char)*MAX_LEN);
        cin>>s>>r;
        //cout<<replaceSpace(s, r)<<"\n";
    }
    return 0;
}