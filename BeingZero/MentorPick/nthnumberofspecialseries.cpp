#include<bits/stdc++.h>
using namespace std;
long long getNthNumber(int N)
{
  	// Your Code Here
      if(N==0){
          return 0;
      }
      if(N==1){
          return 1;
      }
      return((getNthNumber(N-2)*getNthNumber(N-2))-getNthNumber(N-1));
}