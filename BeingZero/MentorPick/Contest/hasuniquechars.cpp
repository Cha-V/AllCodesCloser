#include <bits/stdc++.h>

#define MAX_SIZE 1000

using namespace std;

bool hasUniqueChars(char s[])
{
  //TODO:  Your Code Here
  int n=strlen(s), flag=1;
  int freq[256]={0};
  for(int i=0;i<n;i++){
      freq[s[i]]++;
  }
  for(int i=0;i<n;i++){
      if(freq[s[i]]>1){
          flag=0;
          break;
      }
  }
  if(flag){
      return true;
  }
  else{
      return false;
  }
}