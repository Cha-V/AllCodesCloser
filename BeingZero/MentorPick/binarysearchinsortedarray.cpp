#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int findingIdx(int *arr, int n, int k){
    // TODO: Your Code Here
    int low=0, high=n-1, mid, flag=0, index;
    mid=low+high;
    mid/=2;
    while(low<=high && !flag){
        mid=low+high;
        mid/=2;
        if(arr[mid]==k){
            flag=1;
            index=mid;
        }
        else{
            if(k<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }
    if(flag){
        return mid;
    }
    else{
        return -1;
    }
}