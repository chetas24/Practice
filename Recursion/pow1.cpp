#include <iostream>
using namespace std;

/*void powFunc(int b, int e)
{
    int ans = 1;
    for (int i = 0; i < e; i++)
    {
        ans = ans * b;
    }
    cout << ans;
}*/

int powFunc(int b, int e)  //recursion
{
    if (e != 0)
    {
        return (b*powFunc(b, e - 1));
    }
    else 
        return 1;
}

int main()
{
    int base, exponent;
    cout << "Enter Base Number - "; cin >> base;
    cout << "Enter Exponent - "; cin >> exponent;
    int result = powFunc(base, exponent);
    cout << base << " ^ " << exponent << " = " << result;
    return 0;
}
