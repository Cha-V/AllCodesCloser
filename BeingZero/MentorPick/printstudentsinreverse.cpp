#include<bits/stdc++.h>
using namespace std;
int revers(int age){
    int res=0;
    while(age>0){
        res=(res*10)+(age%10);
        age/=10;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    string name[n];
    int age[n];
    string gender[n];
    for(int i=0;i<n;i++){
        cin>>name[i]>>age[i]>>gender[i];
    }
    int parity;
    if((n-1)%2==0){
        parity=0;
    }
    else{
        parity=1;
    }
    for(int i=n-1;i>=0;i--){
        if(i%2==parity){
            transform(name[i].begin(), name[i].end(), name[i].begin(), ::toupper);
        }
        else{
            transform(name[i].begin(), name[i].end(), name[i].begin(), ::tolower);
        }
        int ag=revers(age[i]);
        string gend=gender[i];
        transform(gend.begin(), gend.end(), gend.begin(), ::tolower);
        if(gend!=gender[i]){
            transform(gender[i].begin(), gender[i].end(), gender[i].begin(), ::tolower);
        }
        else{
            transform(gender[i].begin(), gender[i].end(), gender[i].begin(), ::toupper);
        }
        cout<<name[i]<<" "<<ag<<" "<<gender[i]<<"\n";
    }
    return 0;
}