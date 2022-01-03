#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t, tt;
    cin>>t;
    for(tt=1;tt<=t;tt++){
        ll n, res=0, i, flag=-1, result=0, len, j, k, count=0, temp=0, x=0, y=0, sum=0, tsum=0;
        cin>>n;
        char s[n];
        int a[n], b[n], c[n];
        for(i=0;i<n;i++){
            cin>>s[i];
            a[i]=0;
            b[i]=0;
            c[i]=0;
        }
        for(i=0;i<n;i++){
            if(s[i]=='X'){
                if(temp==0){
                    temp=1;
                    x=i;
                }
                else if(temp=-1){
                    temp=1;
                    count++;
                    for(j=y+1;j<i;j++){
                        b[j]=count;
                        c[j]=i-j;
                    }
                }
                x=i;
            }
            else if(s[i]=='O'){
                if(temp==0){
                    temp=-1;
                }
                else if(temp=-1){
                    temp=1;
                    count++;
                    for(j=x+1;j<i;j++){
                        b[j]=count;
                        c[j]=i-j;
                    }
                }
                y=i;
            }
            a[i]=count;
            sum+=a[i];
        }
        tsum=0;
        for(i=0;i<n;i++){
            if(b[i]!=0){
                ll temp1=sum-(a[i]*c[i]);
                ll h=i+c[i];
                h=n-h;
                ll temp2=h*b[i];
                sum-=a[i];
                tsum=(tsum+temp1)%1000000007;
            }
            else{
				sum=sum-a[i];
				long temp1=n-i-1;
				long temp2=sum-(a[i]*temp1);
				tsum=(tsum+temp2)%1000000007;
					
			}
        }
        cout<<"Case #"<<tt<<": "<<tsum<<"\n";
    }
    return 0;
}