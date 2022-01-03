#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int firstOccuranceIdx(int *arr, int n, int k){
    // TODO: Your Code Here
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return -1;
}