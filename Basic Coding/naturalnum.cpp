#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int j = 1;
    int k = 1;
    // using While loop
    cout << "While Loop: ";
    while (j <= num)
    {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // For Loop
    cout << "For Loop: ";
    for(int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Do While Loop
    cout << "Do While Loop: ";
    do{
        cout << k << " ";
        k++;
    }
    while (k <= num);
}