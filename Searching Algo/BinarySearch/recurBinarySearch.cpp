#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector <int>& v, int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if (v[mid] == x)
        {
            return mid;
        }
        else if (x < v[mid])
        {
            return binarySearch(v, start, mid - 1, x);
        }
        else
        {
            return binarySearch(v, mid + 1, end, x);
        }
    }
    return -1;
}


int main()
{
    vector <int> v{1, 2, 3, 4, 5, 6};
    int size = v.size();
    int key;
    cout << "Enter Key: ";
    cin >> key;

    int keyFound = binarySearch(v, 0, size - 1, key);
    if(keyFound == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Key found at Position: " << keyFound;
    }
}