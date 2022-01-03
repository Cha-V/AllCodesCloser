#include <bits/stdc++.h>

#define MAX_SIZE 1000

using namespace std;

char firstMostFrequentCharacter(char s[])
{
  //TODO:  Your Code Here
  int a[256]={0};
    char res=s[0];
    for(int i=0;i<strlen(s);i++){
        a[s[i]]++;
    }
    int max=a[s[0]];
    for(int i=0;i<strlen(s);i++){
        if(a[s[i]]>max){
            max=a[s[i]];
            res=s[i];
        }
    }
    return res;
}