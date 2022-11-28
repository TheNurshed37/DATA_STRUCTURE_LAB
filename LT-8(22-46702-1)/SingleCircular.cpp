#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

};

void insertFront(Node **head, int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAt(Node *previous, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = previous->next;
    previous->next = newNode;
}

void display(Node* head)
{
    Node* temp = head;
    if (head != NULL)
    {
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        while (temp != head);
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = head;

    display(head);

    cout<<endl;
    insertAt(second,50);
    display(head);

    cout<<endl;
    insertAt(third,100);
    display(head);


}
