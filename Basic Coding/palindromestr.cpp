#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    int n = str.size();
    int flag = 0;

    for(int i = 0; i <= n/2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "Yes, It is a Palindrome" << endl;
    }
    else
    {
        cout << "No, It is not a Palindrome" << endl;
    }
    return 0;
}