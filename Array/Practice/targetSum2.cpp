#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 4, 2, 3, 5};
    int targetSum = 15;
    int n = 5;
    //int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i+1; j < n - 1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == targetSum)
                {
                    //count++;
                    cout << "Triplet is: " << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                    return 1;
                }
            }
        }
    }
    //cout << count;
    return -1;
}