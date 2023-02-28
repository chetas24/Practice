#include <iostream>
#include <vector>
using namespace std;
// In binary search Array, list should be sorted either ascending or descending

int binarySearch(vector <int>& v, int n, int k)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;

        if(v[mid] == k)
        {
            return mid;
        }
        else if (k < v[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector <int> v{1, 2, 4, 6, 7, 9, 10, 12, 46, 89, 100};
    int size = v.size();
    int key;
    cout << "Enter Key: ";
    cin >> key;
    int keyFound = binarySearch(v, size, key);
    if(keyFound == -1)
    {
        cout << "Not found";
    }
    else{
        cout << "Position: " << keyFound << " Key: " << v[keyFound] << endl;
    }
}