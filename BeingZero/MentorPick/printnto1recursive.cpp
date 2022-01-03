#include<bits/stdc++.h>
using namespace std;

void printNToOne(int N)
{
    
    if(N>0){
        cout<<N<<" ";
    }
    if(N>1){
        printNToOne(N-1);
    }
    if(N==0){
        cout<<"";
    }
}