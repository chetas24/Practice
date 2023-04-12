#include <iostream>
#include <vector>

using namespace std;

int secondLargest(vector <int> &v1, int n)
{
    int largest = v1[0];
    int secondlargest = -1;

    for (int i = 0; i < n; i++)
    {
        if(v1[i] > largest)
        {
            secondlargest = largest;
            largest = v1[i];
        }
        else if(v1[i] != largest && v1[i] > secondlargest)
                secondlargest = v1[i];
    }
    return secondlargest;
}

int main()
{
    vector <int> v1 = {12, 43, 67, 6, 12, 67, 3};
    int size = v1.size();

    cout << secondLargest(v1, size) << endl;
}