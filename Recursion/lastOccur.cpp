#include <iostream>
using namespace std;

int lastOccur(int arr[], int n, int x, int currIndex)
{
    if (currIndex == n)
    {
        return -1;
    }

    int result = lastOccur(arr, n, x, currIndex+1);

    if (result == -1 && arr[currIndex] == x)
    {
        return currIndex;
    }
    else
    {
        return result;
    }
}

int main()
{
    int arr[] = {2, 1, 4, 3, 4};
    int size = 5;
    int key = 4;
    cout << lastOccur(arr, size, key, 0);
    return 0;
}