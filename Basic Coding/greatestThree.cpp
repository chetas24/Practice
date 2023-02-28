#include <iostream>
using namespace std;

int main()
{
    int first, second, third;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;
    cout << "Enter third number: ";
    cin >> third;

    if ((first >= second) && (first >= third))
    {
        cout << "First is greatest";
    }
    else if ((second >= first) && (second >= third))
    {
        cout << "Second is greatest";
    }
    else{
        cout << "Third is greatest";
    }
}