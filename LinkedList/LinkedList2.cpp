#include <iostream>
using namespace std;
// Building LinkedList Data Structure

class Node
{
    int elem;
    class Node* next;
};

class LinkedList
{
    class Node* head;

    void addFront(int x);
    void removeFront(int x);
    int len();
    int search(int x);
    void print();
}

void LinkedList::print()
{

}

void LinkedList::addFront(int x)
{
    class Node* temp = head;  
    head = new Node;   
    head -> elem = x;   
    head -> next = temp;   
}

void LinkedList::removeFront(int x)
{
    if (head == NULL) return;

    class Node* temp = head;
    head = head -> next;

}

int main()
{
    class LinkedList ll;
    ll.addFront(40);
    ll.addFront(30);
    ll.addFront(20);
    ll.addFront(10);

}