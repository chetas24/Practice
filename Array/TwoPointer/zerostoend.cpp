#include <iostream>
#include <vector>
using namespace std;

void zerosToend(vector <int> &a, int n)
{
    int s = 0, e = n - 1;
    
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