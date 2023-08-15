#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the Number : ";
    std::cin >> n;
    int num = n;
    int reverse = 0;
    int rem;

    while(n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    std::cout << "Reversed Number = " << reverse << std::endl;

    if (num != reverse)
    {
        std::cout << "Number is not Palindrome!!!" << std::endl;
    }
    else std::cout << "Number is Palindrome!!!" << std:: endl;
}