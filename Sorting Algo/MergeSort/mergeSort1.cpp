#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int s, int m, int e)
{
    int nl = m - s + 1;
    int nr = e - m;

    int arrl[nl], arrr[nr];

    for(int i = 0; i < nl; i++)
    {
        arrl[i] = arr[s + i];
    }
    for(int j = 0; j < nr; j++)
    {
        arrr[j] = arr[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = s;

    while (i < nl && j < nr)
    {
        if(arrl[i] <= arrr[j])
        {
            arr[k] = arrl[i];
            i++;
        }
        else
        {
            arr[k] = arrr[j];
            j++;
        }
        k++;
    }

    while (i < nl)
    {
        arr[k] = arrl[i];
        i++;
        k++;
    }

    while (j < nr)
    {
        arr[k] = arrr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int mid = s+(e-s)/2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s, mid, e);
    }
}

int main()
{
    int arr[] = {80, 30, 40, 70, 50, 20, 60};
    int n = 7;
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
}