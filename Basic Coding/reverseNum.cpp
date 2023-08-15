#include <iostream>

int main()
{
    int n = 123;
    int reverse = 0;
    int rem;

    while(n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    std::cout << "Reversed Number = " << reverse << std::endl;
}