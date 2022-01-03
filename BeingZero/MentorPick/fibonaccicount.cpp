#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int factorial(int n, int k){
    if(n==k){
        cnt++;
    }
    if(n==1 || n==0){
        return 1;
    }
        return n*(factorial(n-1));
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        cnt=0;
        int res=factorial(n, k);
        cout<<cnt<<"\n";
    }
	return 0;
}