#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int findingIdx(int *arr, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            return i;
        }
    }
    return -1;
}