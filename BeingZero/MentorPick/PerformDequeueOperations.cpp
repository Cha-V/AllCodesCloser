#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n--){
            string s;
            cin>>s;
            if(s=="insert_front"){
                int k;
                cin>>k;
                d.push_front(k);
            }
            else if(s=="insert_back"){
                int k;
                cin>>k;
                d.push_back(k);
            }
            else if(s=="print_front"){
                if(d.empty()){
                    cout<<"EMPTY ";
                }
                else{
                    cout<<d.front()<<" ";
                }
            }
            else if(s=="print_back"){
                if(d.empty()){
                    cout<<"EMPTY ";
                }
                else{
                    cout<<d.back()<<" ";
                }
            }
            else if(s=="remove_front"){
                if(d.empty()){
                    cout<<"EMPTY ";
                }
                else{
                    cout<<d.front()<<" ";
                    d.pop_front();
                }
            }
            else if(s=="remove_back"){
                if(d.empty()){
                    cout<<"EMPTY ";
                }
                else{
                    cout<<d.back()<<" ";
                    d.pop_back();
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}