#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

bool isSortedDescending(int *a, int n){
    // TODO: Your Code Here
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            flag=0;
        }
    }
    if(flag){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a[5];
    int k=5;
    for(int i=0;i<5;i++){
        a[i]=k;
        k--;
    }
    cout<<isSortedDescending;
    return 0;
}