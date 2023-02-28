#include <iostream>
using namespace std;

int main()
{
    // Method 1
    int age;
    cout << "Enter your age : ";
    cin >> age;
    
    if (age >= 18)
    {
        cout << "Can Vote" << endl;
    }
    else
    {
        cout << "Cannot Vote" << endl;
    }
    

    // Method 2 : Ternary Operator
    age >= 18 ? cout << "Vote" : cout << "Cannot Vote";
    return 0;
}