#include <iostream>
#include <vector>
using namespace std;

void display (vector<int>& v1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
}

void bubbleSort(vector <int>& v1, int n)
{
    int round = 0;
    for (int i = 0; i < n - 1; i++)
    {
        round++;
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if(v1[j] > v1[j + 1])
            {
                swap(v1[j], v1[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
    cout << "No of Rounds: " << round << endl;
}

int main()
{
    vector <int> v1{20, 40, 30, 60, 10, 80, 70};
    int size = v1.size();
    bubbleSort(v1, size);
    display(v1, size);
}