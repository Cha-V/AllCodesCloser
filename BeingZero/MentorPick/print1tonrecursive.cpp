#include<bits/stdc++.h>
using namespace std;

void printOneToN(int N)
{
    // Just complete given function
  	// Do not write main or input reading
    if(N>1){
        printOneToN(N-1);
    }
    cout<<N<<" ";
    if(N==0){
        cout<<0;
    }
}