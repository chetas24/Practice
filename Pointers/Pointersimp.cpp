#include <iostream>
using namespace std;

// void swapFunc(int x, int y) /// Pass by value
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10, b = 20;
//     swapFunc(a,b);
//     cout << a << " " << b << endl; // value won't change
// }


// void swapFunc(int &x, int &y) /// Pass by reference, copying value
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a = 10, b = 20;
//     swapFunc(a,b);
//     cout << a << " " << b << endl; // value changes
// }



void swapFunc(int *x, int *y) /// Pass by pointer
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    swapFunc(&a,&b);
    cout << a << " " << b << endl; // value changes
}