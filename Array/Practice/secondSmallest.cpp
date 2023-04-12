#include <iostream>
#include <vector>

using namespace std;

int secondSmallest(vector<int> &v1, int n)
{
    int smallest = v1[0];
    int secondsmallest = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(v1[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = v1[i];
        }
        else if (v1[i] != smallest && v1[i] < secondsmallest)
            secondsmallest = v1[i];
    }
    return secondsmallest;
}

int main()
{
    vector <int> v1 = {12, 24, 876, 23, 5};
    int size = v1.size();

    cout << secondSmallest(v1, size) << endl;
}