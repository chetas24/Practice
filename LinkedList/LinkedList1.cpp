#include <iostream>

class Node
{
    public:
    int data;
    Node* next;

    Node (int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
    private:
    Node* head;

    public:
    LinkedList()
    {
        this->head = nullptr;
    }

    void insertAtBeginning(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    
    void printList()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(4);
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    list.printList();
}