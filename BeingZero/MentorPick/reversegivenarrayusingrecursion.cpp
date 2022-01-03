#include<bits/stdc++.h>
using namespace std;

void reverseArr(int a[], int n)
{
    // Write Your Code Here
    cout<<a[n-1]<<" ";
    if(n!=1){
        reverseArr(a, n-1);
    }
}

int main()
{
    int t;
    scanf("%d",&t);
  
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++)
            scanf("%d", &arr[j]);
        reverseArr(arr,n);
        printf("\n");
    }
	return 0;
}