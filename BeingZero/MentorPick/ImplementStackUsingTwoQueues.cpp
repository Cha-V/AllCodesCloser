#include <bits/stdc++.h>
using namespace std;
queue<int> q1;
queue<int> q2;
void push(int x)
{
	// Write Code using q1 and q2 only to perform push
	q1.push(x);
}
int pop()
{
	// Write Code using q1 and q2 only to perform pop and return Last-In value
    if(q1.empty()){
        return -1;
    }
	int res=q1.back();
	while(q1.size()>1){
	    int k=q1.front();
		q1.pop();
	    q2.push(k);
	}
	q1.pop();
	while(!q2.empty()){
	    int k=q2.front();
		q2.pop();
	    q1.push(k);
	}
	return res;
}