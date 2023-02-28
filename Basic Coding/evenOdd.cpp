#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to check Even or Odd: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The Number " << num << " is Even Number";
    }
    else 
    {
        cout << "The Number " << num << " is Odd Number";
    }
    cout << endl;
    // Method 2 Ternary operator
    num % 2 == 0 ? cout << "Even" : cout << "Odd";
    return 0;
}