#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n, k, sum=0;
	    cin>>n>>k;
	    ll a[n];
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(k==0){
	        cout<<sum<<"\n";
	    }
	    else{
	        ll allones=1;
	        for(ll i=0;i<n;i++){
	            if(a[i]==0){
	                allones=0;
	                break;
	            }
	        }
	        if(allones){
	            cout<<sum+(2*n)<<"\n";
	        }
	        else{
	            ll tt=0;
	            for(tt=0;tt<k && !allones;tt++){
	                for(ll i=0;i<n;i++){
	                    if(a[i]!=0){
	                        if(i==0){
	                            a[i+1]++;
	                            a[n-1]++;
	                            sum+=2;
	                        }
	                        else if(i=(n-1)){
	                            a[0]++;
	                            a[n-2]++;
	                            sum+=2;
	                        }
	                        else{
	                            a[i-1]++;
	                            a[i+1]++;
	                            sum+=2;
	                        }
	                    }
	                }
	                ll flag=1;
	                for(ll i=0;i<n;i++){
	                    if(a[i]==0){
	                        flag=0;
	                        break;
	                    }
	                }
	                if(flag){
	                    allones=1;
	                }
	            }
	            if(allones){
	                cout<<sum+(((2*(n)))*(k-tt))<<"\n";
	            }
	            else{
	                cout<<sum<<"\n";
	            }
	        }
	    }
	}
	return 0;
}
