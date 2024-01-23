#include <iostream>
#include <vector>
using namespace std;

void sortZerone(vector <int> &a, int n)
{
    int s = 0; int e = n - 1;
    while(s < e)
    {
        if(a[s] == 0)
        {
            s++;
        }
        else if(a[e] == 1)
        {
            e--;
        }
        if(a[s] != 0)
        {
            swap(a[s], a[e]);
        }
        else if(a[e] != 1)
        {
            swap(a[s], a[e]);
        }
    }
}

int main()
{
    vector <int> a = {1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1};
    int size = a.size();
    sortZerone(a, size);
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}