#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int getIdxInSortedRotatedArr(int *a, int n, int k){
    int flag=0, mid;
    for(int i=0;i<n && !flag;i++){
        if(a[i]==k){
            flag=1;
            mid=i;
        }
    }
    if(flag){
        return mid;
    }
    else{
        return -1;
    }
}