#include <bits/stdc++.h>
using namespace std;
stack<int> s1;
stack<int> s2;
void push(int x)
{
	// Write Code using s1 and s2 only to perform push
	s1.push(x);
}
int pop()
{
	// Write Code using s1 and s2 only to perform pop and return First-In value
	if(!s1.empty()){
	    while(s1.size()>1){
	        int y=s1.top();
			s1.pop();
	        s2.push(y);
	    }
	    int z=s1.top();
	    s1.pop();
	    while(!s2.empty()){
	        int y=s2.top();
			s2.pop();
	        s1.push(y);
	    }
	    return z;
	}
	else{
	    return -1;
	}
}