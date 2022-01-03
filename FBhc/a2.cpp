#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t, tt;
    cin>>t;
    for(tt=1;tt<=t;tt++){
        ll n, res=0, i, flag=-1, result=0, len, j, k;
        cin>>n;
        char s[n];
        int b[n];
        for(i=0;i<n;i++){
            cin>>s[i];
            b[i]=0;
        }
        for(i=0;i<n;i++){
            if(s[i]=='X'){
                if(flag==0){
                    res++;
                }
                flag=1;
            }
            else if(s[i]=='O'){
                if(flag==1){
                    res++;
                }
                flag=0;
            }
            b[i]=res;
        }
        for(i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++)
			{
				if(b[i]!=0)
				{
					long temp1=sum-(a[i]*c[i]);
					int h=i+c[i];
					h=n-h;
					long temp2=h*b[i];
					temp1=temp1-temp2;
					sum=sum-a[i];
					tsum=(tsum+temp1)%1000000007;
				}
				else 
				{
					sum=sum-a[i];
					long temp1=n-i-1;
					long temp2=sum-(a[i]*temp1);
					tsum=(tsum+temp2)%1000000007;
					
				}
			}
        for(i=0;i<n;i++){
            if()
        }
        for (len = 1; len <= n; len++)
        {
            for (i = 0; i <= n - len; i++)
            {
                j = i + len - 1;
                result+=(b[j]-b[i]);
            }
        }
        cout<<"Case #"<<tt<<": "<<result<<"\n";
    }
}