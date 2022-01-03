#include <bits/stdc++.h>

#define MAX_SIZE 1000

using namespace std;

char mostFrequentCharacter(char s[])
{
  //TODO:  Your Code Here
    int a[256]={0};
    char res=s[0];
    for(uint i=0;i<strlen(s);i++){
        a[s[i]]++;
    }
    int min=a[s[0]];
    for(int i=0;i<strlen(s);i++){
        if(a[s[i]]<min){
            min=a[s[i]];
            res=s[i];
        }
    }
    return res;
}