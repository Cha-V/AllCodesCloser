// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    sort(A, A+N);
	    if(N==1){
	        return A[0];
	    }
	    for(int i=0;i<N;i++){
	        if(i==0){
	            if(N>1){
	                if(A[0]!=A[1]){
	                    return A[0];
	                }
	            }
	        }
	        else if(i==N-1){
	            if(N>1){
	                if(A[N-1]!=A[N-2]){
	                    return A[N-1];
	                }
	            }
	        }
	        else{
	            if(i>0 && i<(N-1) && A[i]!=A[i-1] && A[i]!=A[i+1]){
	                return A[i];
	            }
	        }
	    }
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends