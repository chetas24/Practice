#include <iostream>
using namespace std;

// second largest in an Array

int main()
{
    int arr[] = {5, 4, 7, 7, 1, 2};
    int n = 6;
    int maxx = INT_MIN;
    int secondmax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            secondmax = maxx;
            maxx = arr[i];
        }
        else
        {
            if (arr[i] > secondmax && arr[i] < maxx)
            {
                secondmax = arr[i];
            }
        }
    }
    cout << secondmax;
}