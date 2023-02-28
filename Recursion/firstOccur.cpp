#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int x, int currindex)
{
    if (currindex == n)
    {
        return -1;
    }
    if (arr[currindex] == x)
    {
        return currindex;
    }
    int result = firstOccur(arr, n, x, currindex+1);
    return result;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 4};
    int size = 5;
    int key = 4;
    cout << firstOccur(arr, size, key, 0);
    return 0;
}