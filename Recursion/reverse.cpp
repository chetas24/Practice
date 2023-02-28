#include <iostream>
using namespace std;

int rev(int arr[], int s, int e)
{
    if (s >= e)
    return -1;
    
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    return rev (arr, s+1, e-1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    rev (arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}