#include <iostream>
using namespace std;


// Insertion program
struct Node {
    int data; // 4bytes
    Node* next;   // Pointer pointing towards next node // 4 bytes`
};

void insert(Node** head, int n)
{
    Node* newNode = new Node();
    newNode -> data = n;   /// n = value or data
    newNode -> next = *head;
    *head = newNode;
}

void display(Node* head)
{
    Node* current = head;
    while (current != NULL)
    {
        cout << current -> data << " ";
        current = current -> next;
    }
}

int main()
{
    Node* head = NULL;
    insert(&head, 13);
    insert(&head, 23);
    insert(&head, 33);
    insert(&head, 43);
    display(head);
}
