#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int a=0, c=0, g=0, t=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='C'){
            c++;
        }
        else if(s[i]=='G'){
            g++;
        }
        else if(s[i]=='T'){
            t++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            if(a>=c && a>=g && a>=t){
                if(c>=g && c>=t){
                    if(g>=t){
                        s[i]='T';
                        t++;
                    }
                    else{
                        s[i]='G';
                        g++;
                    }
                }
                else if(g>=c && g>=t){
                    if(c>=t){
                        s[i]='T';
                        t++;
                    }
                    else{
                        s[i]='C';
                        c++;
                    }
                }
                else{
                    if(c>=g){
                        s[i]='C';
                        c++;
                    }
                    else{
                        s[i]='G';
                        g++;
                    }
                }
            }
            else if(c>=a && c>=g && c>=t){
                if(a>=g && a>=t){
                    if(g>=t){
                        t++;
                        s[i]='T';
                    }
                    else{
                        g++;
                        s[i]='G';
                    }
                }
                else if(g>=a && g>=t){
                    if(a>=t){
                        t++;
                        s[i]='T';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
                else{
                    if(a>=g){
                        g++;
                        s[i]='G';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
            }
            else if(g>=a && g>=c && g>=t){
                if(a>=c && a>=t){
                    if(c>=t){
                        t++;
                        s[i]='T';
                    }
                    else{
                        c++;
                        s[i]='C';
                    }
                }
                else if(c>=a && c>=t){
                    if(a>=t){
                        t++;
                        s[i]='T';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
                else{
                    if(a>=c){
                        c++;
                        s[i]='C';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
            }
            else{
                if(a>=c && a>=g){
                    if(c>=g){
                        s[i]='C';
                        c++;
                    }
                    else{
                        s[i]='G';
                        g++;
                    }
                }
                else if(c>=a && c>=g){
                    if(a>=g){
                        g++;
                        s[i]='G';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
                else{
                    if(a>=c){
                        c++;
                        s[i]='C';
                    }
                    else{
                        a++;
                        s[i]='A';
                    }
                }
            }
        }
    }
    if(a==c && a==g && a==t){
        cout<<s;
    }
    else{
        cout<<"===";
    }
    return 0;
}