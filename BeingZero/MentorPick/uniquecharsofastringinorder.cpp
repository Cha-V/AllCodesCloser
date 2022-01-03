#include <bits/stdc++.h>
using namespace std;

string uniqueCharString(string s)
{
    string res="";
  int freq[256];
  for(int i=0;i<256;i++){
      freq[i]=0;
  }
  for(int i=0;i<s.length();i++){
      freq[s[i]]++;
  }
  for(int i=0;i<s.length();i++){
      if(freq[s[i]]==1 && (s[i]!=' ')){
          res+=s[i];
      }
    
  }
  return res;
}