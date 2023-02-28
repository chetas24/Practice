#include <iostream>

int main()
{
    int i = 1;
    {
        int i = 2;
        {
            int i = 3;
            {
                std::cout << i;
            }

        }
        std::cout << i;
    }
    std::cout << i;
    return 0;
}