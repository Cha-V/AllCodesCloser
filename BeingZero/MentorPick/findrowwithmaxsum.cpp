#include <bits/stdc++.h>
using namespace std;

#define ROWS    100
#define COLS    100

int rowIdxWithMaxSum(int a[ROWS][COLS], int r, int c){
    int max=-1000000, index=-1;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=a[i][j];
        }
        if(sum>max){
            max=sum;
            index=i;
        }
    }
    return index;
}