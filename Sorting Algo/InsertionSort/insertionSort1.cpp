#include <iostream>
#include <vector>
using namespace std;

void  display(vector <int>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }   
}

void insertionSort(vector <int>& arr, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;  // To check whether previous elements are greater
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector <int> arr{2, 5, 4, 1, 3, 6};
    int size = arr.size();

    insertionSort(arr, size);
    display(arr, size);
}