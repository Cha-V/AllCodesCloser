#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    cout<<a[i][j]<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n, i=0, j=0;
        cin>>n;
        int mat[n][n];
        while(i<n){
            j=0;
            while(j<n){
                cin>>mat[i][j];
                j++;
            }
            i++;
        }
        i=0;
        while(i<n){
            j=0;
            while(j<n && i%2==0){
                cout<<mat[i][j]<<" ";
                j++;
            }
            j=n-1;
            while(j>=0 && i%2!=0){
                cout<<mat[i][j]<<" ";
                j--;
            }
            i++;
        }
        cout<<endl;
    }
    return 0;
}
*/