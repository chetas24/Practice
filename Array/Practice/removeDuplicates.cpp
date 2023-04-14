#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &a, int n)
{
    int i = 0;
    for(int j = 1; j < n; j++)
    {
        if(a[i] != a[j])
        {
            a[i+1] = a[j];
            i++;
        }
    }
    return i + 1;
}

// remove duplicates in place from sorted array TWO POINTER
int main()
{
    vector <int> a = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 12, 12, 15, 15, 15};
    int size = a.size();

    cout << removeDuplicates(a, size) << endl;
}