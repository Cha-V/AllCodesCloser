#include <bits/stdc++.h>

using namespace std;

void printBinaryCounting(int n)
{      
	// Complete only the given function
  	// Do not Read any input
  	// There is hidden code that reads the input for each test case and calls this function with Input value n (for every single test case)
  	// Print output only for this one test case, no newline in the end
    if(n==0){
        cout<<" ";
    }
    else if(n==1){
        cout<<"0";
    }
    else{
        cout<<"0 ";
        queue<string> q;
        n--;
    q.push("1");
    while (n--) {  
        string s1 = q.front();
        q.pop();
        cout << s1 << " ";
        string s2 = s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
    }
}