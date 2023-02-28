#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalRec(char str[], int s, int e)
{
    if (s >= e)   // to check whether we have reached in middle of string 
    return true;

    if (str[s] != str[e])  //checks first character and end character
    return false;
    //if (s < e + 1)  
    return isPalRec (str, s+1, e-1);  // Recursive Function
    //return true;
}

bool isPalindrome(char str[])
{
    int n = strlen(str);
    if (n == 0)
    return true;
    return isPalRec(str, 0, n-1);  // start = 0, end = n-1
}

int main()
{
    char str[] = "HEEH";
    if (isPalindrome(str))
    cout << "True";
    else
    cout << "False";
    return 0;
}