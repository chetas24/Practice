#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = n;
    int count = 0;
    while (x != 0)
    {
        x = x / 10;
        count++;
    }
    cout << count << endl;
}