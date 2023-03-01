#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(char str[], int s, int e)
{
    if (s > e)
        return true;
    
    if (str[s] != str[e])
        return false;
    else
        return checkPalindrome(str, s+1, e-1);
}

bool isPalindrome(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return true;
    return checkPalindrome(str, 0, n - 1);
}

int main()
{
    char str[] = "abbaabba";
    if (isPalindrome(str))
    {
        cout << "The String is Palindrome";
    }
    else
    {
        cout << "The String is Palindrome";
    }
    return 0;
}