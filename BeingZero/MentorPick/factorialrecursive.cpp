#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
        return n*(factorial(n-1));
}