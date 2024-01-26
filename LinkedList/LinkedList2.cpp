#include <iostream>
using namespace std;
// Building LinkedList Data Structure

class Node
{
public:
    int elem;
    class Node* next;
};

class LinkedList
{
    class Node* head;
public:
    LinkedList();
    ~LinkedList();

    void addFront(int x);
    void removeFront();
    int len();
    int search(int x);
    void print();
};

LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList::~LinkedList()
{
    while (head != NULL)
    {
        class Node *iter = head;
        head = iter -> next;
        delete iter;
    }
}

void LinkedList::print()
{
    class Node* iter = head;  
    while (iter != NULL)  // if iter is not NULL
    {
        printf("%d", iter -> elem);  // print(element)
        iter = iter -> next;  // go to next address 
    }
}

void LinkedList::addFront(int x)
{
    // Create a temporary pointer 'temp' to store the current head
    class Node* temp = head;  

    // Create a new node and make it the new head
    head = new Node;   

    // Set the element of the new head to the specified value 'x'
    head -> elem = x;   

    // Update the next pointer of the new head to point to the previous head (temp)
    head -> next = temp;     
}

void LinkedList::removeFront()
{
    // Check if the linked list is empty
    if (head == NULL) 
        return;

    // Create a temporary pointer 'temp' to store the current head
    class Node* temp = head;

    // Move the head to the next node, effectively removing the front node
    head = head -> next;
    delete temp;
}

int main()
{
    class LinkedList ll;
    ll.addFront(40);
    ll.addFront(30);
    ll.addFront(20);
    ll.addFront(10);

    ll.print();
    ll.removeFront();
    ll.print();

}