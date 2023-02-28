#include <iostream>
using namespace std;

int main()
{
    // Size of Pointer = 8 bytes for 64bit system & 4 bytes for 32 bit system
    // int x = 10  -  We have now initialized a variable of type int
    // int* ptr  -  We have now created a pointer of type int with the name ptr
    // int *ptr  -  This is not the correct way to create pointer
    int x = 10;
    int* ptr;
    ptr = &x;

    cout << endl;
    cout << ptr << endl;  // address of x
    cout << &x << endl;  // address of x
    cout << x << endl;
    cout << *ptr << endl; // value of x
    cout << &ptr << endl; // address of pointer
    cout << endl;

    int* * ptr2;  // Double pointer created
    ptr2 = &ptr;

    cout << ptr2 << endl; // Address of pointer ptr
    cout << *ptr2 << endl; // Address of x
    cout << **ptr2 << endl;  // Value of x
    cout << &ptr2 << endl;  // Address of ptr2
    cout << endl;
    return 0;
}