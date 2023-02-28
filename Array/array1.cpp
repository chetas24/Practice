#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << arr << endl; // Address of arr[0]
    cout << &arr << endl; // Address of arr[0]
    cout << &arr[0] << endl; // Address of arr[0]
    cout << arr[0] << endl; // Value at position 0 get printed
    cout << arr+1 << endl; // Address of arr[1]
    cout << &arr[1] << endl; // Address of arr[1]
    cout << arr+2 << " " << &arr[2] << endl; // Address of arr[2]
    cout << &arr[1] + 2 << endl; // Address of arr[3]
    cout << &arr[3] << endl; // Address of arr[3]
    cout << arr[4] + 81 << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << arr[0 + 2] << endl;
    //cout << arr++ << endl;
    
}