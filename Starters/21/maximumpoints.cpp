#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, a, b, c, x, y, z;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>c>>x>>y>>z;
        
        int maxa =0;
        
        for(int i=0; i<21; i++)
        {
            for(int j=0; j<21; j++)
            {
                for(int k=0; k<21; k++)
                {
                    if(i*a+j*b+k*c<=240)
                        maxa= max(maxa, i*x+j*y+k*z);
                }
            }
        }
        cout<<maxa<<endl;
    }
	return 0;
}
