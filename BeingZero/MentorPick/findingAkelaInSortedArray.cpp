#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int findAkelaInLogN(int *arr, int n){
    if(n==1){
        return arr[0];
    }
    else{
        for(int i=1;i<n;i+=2){
            if(a[i]!=a[i-1]){
                return a[i];
            }
        }
    }
}