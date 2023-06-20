#include <iostream>
using namespace std;

// single linked list - Navigation is forward
/*
Nodes - Data & Link
        Data contains actual data
        Link contains the address of next node of the list
*/
// double linked list - Navigation is forward as well as backward
// circular linked list - Last element is linked to the first element
// We can allocate Memory Dynamically.

class Node{
    public:
        int data;
        Node* next;
};

void display(Node* head)
{
    while (head != NULL)
    {
        cout << head -> data;
        head = head -> next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;

    display(head);
}