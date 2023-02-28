#include <iostream>
#include <vector>
using namespace std;

int partition (vector <int>& v1, int low, int high)
{
    int pivot = v1[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (v1[j] <= pivot)
        {
            i++;
            swap(v1[i], v1[j]);
        }
    }
    swap(v1[i + 1], v1[high]);
    return (i + 1);
}

void display(vector <int>& v1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    
}

void quickSort(vector <int>& v1, int low, int high)
{
    if (low < high)
    {
        int p = partition(v1, low, high);

        quickSort(v1, low, p - 1);
        quickSort(v1, p + 1, high);
    }
}

int main()
{
    vector <int> v1{70, 90, 10, 30, 50, 20, 60};
    int size = v1.size();
    int low = 0;
    int high = size - 1;
    quickSort(v1, low, high);
    display(v1, size);

}