#include <bits/stdc++.h>

int main()
{
    int num1 = 27, num2 = 63;
    int ans;

    for (int i = 1; i <= std::min(num1, num2); i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    std::cout << "The GCD of the two number is = " << ans << std::endl; 
    int lcm = num1 * num2 / ans;
    std::cout << "LCM = " << lcm << std::endl;
}