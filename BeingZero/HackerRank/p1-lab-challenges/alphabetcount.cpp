#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    string s;
    cin>>s;
    int freq[256]={0};
    int n=s.length();
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            cout<<char(i)<<" - "<<freq[i]<<"\n";
        }
    }
    return 0;
}
