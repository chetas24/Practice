#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 3, 2, 4, 1, 2, 2, 5};
    int n = 9;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1; // Assigning -1 to all pairs
            }
        }
    }
    //int unique = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            //unique = arr[i];
            cout << arr[i];
        }
    }
}