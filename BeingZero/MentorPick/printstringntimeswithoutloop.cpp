#include<bits/stdc++.h>
using namespace std;

void printStringNTimes(char s[], int N)
{
  	if(N>0){
          cout<<s<<" ";
          printStringNTimes(s, --N);
      }
}