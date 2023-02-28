#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(int x)
{
    double sq;
    sq = sqrt(x);
    return sq;
}

double cubeRoot(int x)
{
    double cb;
    cb = cbrt(x);
    return cb;
}

int main()
{
    cout << squareRoot(49) << endl;
    cout << cubeRoot(49) << endl;
}