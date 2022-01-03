s#include<stdio.h>
#include<string.h>
using namespace std;
bool isLapindrome(char s[]){
  // Your Code Here
  return false;
}
int main()
{
  int t;
  char s[1000];
  scanf("%d\n", &t); // \n removes Newline after t
  while(t--){
    scanf("%s", s);
    bool ans = isLapindrome(s);
    printf("%s\n", ans?"TRUE":"FALSE");
  }
	return 0;
}