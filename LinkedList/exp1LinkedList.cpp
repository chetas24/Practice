#include <iostream>
using namespace std;
//simple traversal of linkedlist
class Node
{
    public:
    int value;
    Node* next;

    Node(int x)
    {
        value = x;
        next = NULL;
    }
};

void traverse(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> value<< " -> ";
        temp = temp -> next;
    }
    cout <<"NULL"<< endl;
}

int main()
{
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    node1 -> next = node2;
    Node* head = node1;
    traverse(head);
    return 0;
}