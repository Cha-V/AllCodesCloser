#include <bits/stdc++.h>
using namespace std;
bool bracket(char a){
    if(a=='('||a==')'||a=='['||a==']'||a=='{'||a=='}')
        return true;
    return false;
}
bool opp(char a, char b){
    if(a=='('){
        if(b==')')
            return true;
    }
    else if(a=='['){
        if(b==']')
            return true;
    }
    else if(a=='{'){
        if(b=='}')
            return true;
    }
    return false;
}
bool validateParenthesis(char s[])
{
        stack<char> stk;
        // Complete code
        int n=strlen(s);
        for(int i=0;i<n;i++){
            if(!bracket(s[i]))
                continue;
            if(stk.empty())
                stk.push(s[i]);
            else{
                if(opp(stk.top(), s[i]))
                    stk.pop();
                else
                    stk.push(s[i]);
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
}