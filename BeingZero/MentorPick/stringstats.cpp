#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    for(int k=0;k<t;k++){
        string a;
        getline(cin,a);
      	if(k==0){
        	getline(cin, a);
        }
        int n=a.length(), v=0, ws=0, d=0, lca=0;
        for(int i=0;i<n;i++){
            if((a[i]=='a')||(a[i]=='A')||(a[i]=='e')||(a[i]=='E')||(a[i]=='i')||(a[i]=='I')||(a[i]=='O')||(a[i]=='o')||(a[i]=='U')||(a[i]=='u')){
                v++;
              	if(islower(a[i])){
                	lca++;
                }
            }
            else if(a[i]==' '){
                ws++;
            }
            else if(a[i]>='0' && a[i]<='9'){
                d++;
            }
            else if(islower(a[i])){
                lca++;
            }
        }
        cout<<"\""<<a<<"\""<<"\nV: "<<v<<" WS: "<<ws<<" D: "<<d<<" LCA: "<<lca<<"\n";
    }
	return 0;
}