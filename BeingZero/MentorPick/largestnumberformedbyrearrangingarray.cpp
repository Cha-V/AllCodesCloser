#include <bits/stdc++.h>
using namespace std;
bool comp(int x, int y){
    string a, b, c, d;
    a=to_string(x);
    b=to_string(y);
    c=a+b;
    d=b+a;
    if(c>d){
        return true;
    }
    else{
        return false;
    }
}
void rearrangeArrayToFormLargestNumber(int a[], int n)
{
    sort(a, a+n, comp);
}