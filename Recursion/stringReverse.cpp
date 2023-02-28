#include <iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    cout << str << endl;
    if(i > j)
    {
        return ;
    }
    swap (str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
    // or reverse(str, i+1, j-1);
}

int main()
{
    string name = "Chetas";
    reverse(name, 0, name.length() - 1);
    cout << name;
    return 0;
}