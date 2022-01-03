#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int sumArrayElements(int a[], int n){
    // TODO: Your Code Here
    if(n==0){
        return 0;
    }
    return a[n-1]+sumArrayElements(a, n-1);
}