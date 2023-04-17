#include <iostream>
#include <stack>  //using stl
using namespace std;

// stack uses LIFO principle - Last In First Out


int main()
{
    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(7);
    cout << "Size of stack: " << s.size() << endl;

    //pop operation
    s.pop();

    cout<< "Top Element: " << s.top() << endl;

    if(s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack: " << s.size() << endl;
    return 0;
}