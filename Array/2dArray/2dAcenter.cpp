#include <iostream>
using namespace std;

int main()
{
    int arr[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}};
    int rows = sizeof arr / sizeof arr[0];   // first find length of row
    int cols = sizeof arr[0] / sizeof(int);   // find length of column
    //cout << rows << " " << cols;
    int mid = arr[rows/2][cols/2];  // then find mid with the help of rows and columns

    if (rows % 2 != 0 && cols % 2 != 0)
    {
        cout << mid;
    }
    else 
    {
        cout << "Null";
    }
}

