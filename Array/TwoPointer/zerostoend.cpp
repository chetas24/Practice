#include <iostream>
#include <vector>
using namespace std;
//Two Pointer

void zerosToend(vector <int> &a, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    for (; j < n; j++)
    {
        a[j] = 0;
    }
}

int main()
{
    vector <int> a = {1, 0, 2, 6, 0, 4};
    int size = a.size();
    zerosToend(a, size);
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}