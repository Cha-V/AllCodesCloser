#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int q=1;q<=t;q++){
        long long int n;
        cin>>n;
        string str;
        cin>>str;
        long long int a[n],b[n],c[n],ans=0,x=0,y=0,sum=0,temp=0;
        for(long long int i=0;i<n;i++){
            a[i]=0;
            b[i]=0;
            c[i]=0;
        }
        for(long long int i=0;i<n;i++){
           
            if(str[i]=='X'){
                 
                if(temp==-1){
                    ans++;
                    for(long long int j=y+1;j<i&&j<n;j++){
                        b[j]=ans;
                        // cout<<ans<<" ";
                        c[j]=i-j;
                    }
                }
                temp=1;
                x=i;
            }
            else if(str[i]=='O'){
                if(temp==1){
                    //temp=-1;
                    ans++;
                    for(long long int j=x+1;j<i&&j<n;j++){
                         b[j]=ans;
                        //  cout<<ans<<" ";
                        c[j]=i-j;
                    }
                    // y=i;
                }
                temp=-1;
                y=i;
            }
            a[i]=ans;
            sum+=ans;
        }
        
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<"\n";
        // }
        
        long long int tsum=0,t1,t2,w;
        for(long long int i=0;i<n;i++){
            if(b[i]!=0){
                t1=sum-(a[i]*c[i]);
                w=i+c[i];
                w=n-w;
                t2=w*b[i];
                t1=t1-t2;
                sum=sum-a[i];
                tsum=(tsum+t1)%1000000007;
            }
            else{
                sum=sum-a[i];
    t1=n-i-1;
    t2=sum-(a[i]*t1);
    tsum=(tsum+t2)%1000000007;
            }
        }
        cout<<"Case #"<<q<<": "<<tsum<<"\n";
    }
}