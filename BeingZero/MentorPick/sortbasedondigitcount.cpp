#include<bits/stdc++.h>
using namespace std;
int digitcnt(int n){
    int dcnt=0;
    while(n>0){
        dcnt++;
        n/=10;
    }
    return dcnt;
}
bool comp(int x, int y){
    int a=digitcnt(x), b=digitcnt(y);
    if(a<=b){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a, a+n, comp);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int digitcnt(int n){
    int dcnt=0;
    while(n>0){
        dcnt++;
        n/=10;
    }
    return dcnt;
}
bool comp(int x, int y){
    int a=digitcnt(x), b=digitcnt(y);
    if(a<=b){
        return true;
    }
    else{
        return false;
    }
}
void sortOnDigits(vector<int> &a)
{
	sort(a.begin(), a.end(), comp);
}
*/