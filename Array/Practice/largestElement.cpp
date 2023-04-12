#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &v1, int n)
{
    int maxx = v1[0];
    for (int i = 0; i < n; i++)
    {
        if(v1[i] > maxx)
        {
            maxx = v1[i];
        }
    }
    return maxx;
}

int main()
{
    vector<int> v1 = {20, 45, 65, 12, 5, 8};
    int size = v1.size();

    cout << largestElement(v1, size) << endl;
}