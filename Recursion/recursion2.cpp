#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * pow(x, n - 1);
}

int main()
{
    int x = 5, n = 3;
    int result = pow(x, n);
    cout << result;
    return 0;
}