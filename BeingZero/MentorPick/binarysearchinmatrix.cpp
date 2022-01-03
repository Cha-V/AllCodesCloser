#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

#define ROWS    100
#define COLS    100

void findNumberInSortedGrid(int arr[ROWS][COLS], int r, int c, int key){
   int flag=-1;
   for(int i=0;i<r && flag==-1;i++){
      for(int j=0;j<c && flag==-1;j++){
         if(arr[i][j]==key){
            flag=0;
            cout<<i<<" "<<j;
         }
      }
   }
}