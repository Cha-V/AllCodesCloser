#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int findingIdx(int a[], int n, int k){
  if(n==0)
  	return -1;
  if(a[n-1]==k)
  	return n-1;
  else
  	return findingIdx(a,n-1,k);
}