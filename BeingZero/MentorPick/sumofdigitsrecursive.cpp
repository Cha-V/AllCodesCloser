#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if(n>9){
        
        return (n%10 + sumOfDigits(n/10));
    }
    return n%10;
}
int main(){
    int n;
    while(cin>>n){
        cout<<sumOfDigits(n)<<"\n";
    }
    return 0;
}