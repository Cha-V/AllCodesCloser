#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string inp, f="", l="", res="";
    char k;
    getline(cin,inp);
    int n=inp.length(), i=0;
    while(inp[i]!=' '){
        f+=inp[i];
        i++;
    }
    i++;
    while(i<n){
        l+=inp[i];
        i++;
    }
    int fl=f.length();
    int ll=l.length();
    i=1;
    res+=f[0];
    int flag=1;
    while(i<fl && flag){
        if(f[i]<=l[0]){
            res+=f[i];
        }
        else{
            flag=0;
        }
        i++;
    }
    res+=l[0];
    cout<<res;
    return 0;
}
