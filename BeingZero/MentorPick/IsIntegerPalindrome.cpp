#include<stdio.h>
#include<stdbool.h>
void reverse(int n, int &rev)
{
    if (n == 0) {
        return;
    }
    rev = rev * 10 + (n % 10);
    reverse(n / 10, rev);
}
bool isIntegerPalindrome(int n)
{
	int rev = 0;
    reverse(n, rev);
    return (n == rev);
}