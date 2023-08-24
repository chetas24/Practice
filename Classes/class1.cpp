#include <iostream>

class C1
{
    int val {};
    public:
        void setValue(int value);
        int getValue();
};

void C1::setValue(int value)
    {
        val = value;
    }
int C1::getValue()
    {
        return val;
    }

int main()
{
    C1 obj1;
    obj1.setValue(3);
    std::cout << "Value is " << obj1.getValue();
    return 0;
}