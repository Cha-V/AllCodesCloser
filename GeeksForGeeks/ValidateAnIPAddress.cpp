// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            string a="", b="", c="", d="";
            int n=s.length();
            if(n>15){
                return 0;
            }
            if(n<7){
                return 0;
            }
            int i=0;
            while(i<n && s[i]!='.'){
                a+=s[i];
                i++;
            }
            i++;
            while(i<n && s[i]!='.'){
                b+=s[i];
                i++;
            }
            i++;
            while(i<n && s[i]!='.'){
                c+=s[i];
                i++;
            }
            i++;
            while(i<n && s[i]!='.'){
                d+=s[i];
                i++;
            }
            i=0;
            int dot=0;
            while(i<n){
                if(s[i]=='.'){
                    dot++;
                }
                i++;
            }
            if(dot>3){
                return 0;
            }
            if(a.length()!=1 && a[0]=='0'){
                return 0;
            }
            if(b.length()!=1 && b[0]=='0'){
                return 0;
            }
            if(c.length()!=1 && c[0]=='0'){
                return 0;
            }
            if(d.length()!=1 && d[0]=='0'){
                return 0;
            }
            i=a.length();
            i--;
            while(i>=0){
                if(!(a[i]=='0'||a[0]=='1'||a[0]=='2'||a[0]=='3'||a[0]=='4'||a[0]=='5'||a[0]=='6'||a[0]=='7'||a[0]=='8'||a[0]=='9')){
                    return 0;
                }
                i--;
            }
            i=b.length();
            i--;
            while(i>=0){
                if(!(b[i]=='0'||b[0]=='1'||b[0]=='2'||b[0]=='3'||b[0]=='4'||b[0]=='5'||b[0]=='6'||b[0]=='7'||b[0]=='8'||b[0]=='9')){
                    return 0;
                }
                i--;
            }
            i=c.length();
            i--;
            while(i>=0){
                if(!(c[i]=='0'||c[0]=='1'||c[0]=='2'||c[0]=='3'||c[0]=='4'||c[0]=='5'||c[0]=='6'||c[0]=='7'||c[0]=='8'||c[0]=='9')){
                    return 0;
                }
                i--;
            }
            i=d.length();
            i--;
            while(i>=0){
                if(!(d[i]=='0'||d[0]=='1'||d[0]=='2'||d[0]=='3'||d[0]=='4'||d[0]=='5'||d[0]=='6'||d[0]=='7'||d[0]=='8'||d[0]=='9')){
                    return 0;
                }
                i--;
            }
            stringstream aa(a);
            int aaa=-1, bbb=-1, ccc=-1, ddd=-1;
            aa>>aaa;
            stringstream bb(b);
            bb>>bbb;
            stringstream cc(c);
            cc>>ccc;
            stringstream dd(d);
            dd>>ddd;
            if(aaa<0 || aaa>255 || bbb<0 || bbb>255 || ccc<0 || ccc>255 || ddd<0 || ddd>255){
                return 0;
            }
            if(aaa>=0 && aaa<256 && bbb>=0 && bbb<256 && ccc>=0 && ccc<256 && ddd>=0 && ddd<256){
                return 1;
            }
            
            return 0;
        }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends