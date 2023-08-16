#include <iostream>

void func(int i, int n)
{
    if(i > n) return;
    std::cout << "XYZ" << std::endl;

    func(i+1, n);
}

int main()
{
    int n = 5;

    func(1, n);
    return 0;
}