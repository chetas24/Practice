#include <iostream>
using namespace std;

int main()
{
    // Method 1
    int num;
    cout << "Enter Number : ";
    cin >> num;

    /*
    if(num > 0)
    {
        cout << "Positive";
    }
    else if (num < 0)
    {
        cout << "Negative";
    }
    else 
    {
        cout << "Zero";
    }
    */

    // Method 2
    /*
    if (num >= 0)
    {
        if (num == 0)
        {
            cout << "Zero";
        }
        else
        {
            cout << "Positive";
        }
    }
    else
    {
        cout << "Negative";
    }
    */


    // Method 3
    if (num == 0)
        cout << "Zero"; else (num > 0) ? cout << "Positive" : cout << "Negative";

    return 0;
}