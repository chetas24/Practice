#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    int revnum = 0, tempnum, rem;
    tempnum = num;

    while (num != 0)
    {
        rem = num % 10;
        revnum = revnum * 10 + rem;
        num = num / 10;
    }
    //cout << revnum;

    if (tempnum == revnum)
    {
        cout << "Entered Number is Palindrome";
    }
    else
    {
        cout << "Entered Number is not Palindrome";
    }
    return 0;
}