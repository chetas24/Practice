#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector <int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if(a[i] >= a[i - 1])
        {

        }
        else
        {
            return false;
            //break;
        }
    }
    return true;
}

int main()
{
    vector <int> a = {1, 2, 2, 3, 4};
    int size = a.size();

    if(isSorted(a, size))
    {
        cout << "True";
    }
    else{
        cout << "False";
    }
}