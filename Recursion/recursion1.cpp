#include <iostream>
using namespace std;


void reachHome(int src, int dest)
{
    cout << "Source: " << src << "  Destination: " << dest << endl;
    if (src == dest)
    {
        cout << "Reached Home";
        return;
    }

    src++;
    reachHome(src, dest);
}

int main()
{
    int src = 1, dest = 10;

    reachHome(src,dest);
}