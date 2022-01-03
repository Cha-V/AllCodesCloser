#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

vector< vector<int> > readAndReturn()
{
    int t;
    cin>>t;
    vector<vector<int>> mat;
    while(t--){
        int k;
        cin>>k;
        vector<int> v;
        for(int i=0;i<k;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        mat.push_back(v);
    }
    return mat;
}

void printMatrix(vector< vector<int> > mat)
{
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
}
int main() {
    int t; cin>>t;
    while(t--){
        vector< vector<int> > v = readAndReturn(); 
        printMatrix(v);
    }
    return 0;
}