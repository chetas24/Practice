//insert at specific position

#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, x;
    cout << "Enter the Size of Array: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the new Element Location: ";
    cin >> pos;
    cout << "Enter the new ELement: ";
    cin >> x;

    for(int i = n; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = x;
    n++;

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}