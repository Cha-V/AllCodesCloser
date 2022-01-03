#include<bits/stdc++.h>
using namespace std;

int compressString(char s[]){

    // Compress s in-place.  Do not take any other array or string
    // Return the modified length of compressed string
    int n;
    n=strlen(s);
    for(int i=0;i<n;i++){
        int count=0, index;
        for(int j=i+1;j<n;j++){
            if(s[j]==s[i]){
                count++;
            }
            s[j]='_';
            index=j;
        }
        s[i+1]=to_string(count);
        for(int j=i+2;j<)
    }
}