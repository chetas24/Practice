#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 3, 5, 5, 1};
    int targetSum = 6;
    int n = 5;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j] == targetSum)
            {
                count++;
            }
            
        }
    }
    cout << count;
}