#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int d, m, y;
        string dd="", mm="", yy="";
        if(s[0]!='0'){
            dd+=s[0];
        }
        dd+=s[1];
        if(s[3]!='0'){
            mm+=s[3];
            
        }
        mm+=s[4];
        if(s[6]!='0'){
            yy+=s[6];
            yy+=s[7];
            yy+=s[8];
        }
        else if(s[7]!='0'){
            yy+=s[7];
        }
        else if(s[8]!='0'){
            yy+=s[8];
        }
        yy+=s[9];
        stringstream deek(dd);
        stringstream meek(mm);
        stringstream yeek(yy);
        deek>>d;
        meek>>m;
        yeek>>y;
        int flag=1;
        if(d<=0 || d>31){
            flag=0;
        }
        if(m<=0 || m>12){
            flag=0;
        }
      	if(y<1000){
        	flag=0;
        }
        if((m==1 && d>31) || (m==3 && d>31) || (m==4 && d>30) || (m==5 && d>31) || (m==6 && d>30) || (m==7 && d>31) || (m==8 && d>31) || (m==9 && d>30) || (m==10 && d>31) || (m==11 && d>30) || (m==12 && d>31)){
            flag=0;
        }
        if(m==2){
            if(((y%4==0)&&(y%100!=0))||(y%400==0)){
                if(d>29){
                    flag=0;
                }
            }
            else{
                if(d>28){
                    flag=0;
                }
            }
        }
        if(flag){
            cout<<"VALID";
        }
        else{
            cout<<"INVALID";
        }
        cout<<"\n";
    }
	return 0;
}