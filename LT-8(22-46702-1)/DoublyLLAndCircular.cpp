#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
};
Node* head;
Node* getnewNode(int x)
{
    Node* newNode= new Node();
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
void insertNode(int x)
{
    Node* newNode=getnewNode(x);
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
        newNode->prev=NULL;
    }
    cout<<"inserted"<<endl;
}
void insertBeforeANode(int index, int x)
{
    Node* NewNode = getnewNode(x);
    NewNode->data = x;

    if (index== 0)
    {
        NewNode->next = head;
        head = NewNode;
        return;
   }

   Node* temp = head;
    for (int i = 0; 1 < index-1; i++)
    {
        temp = temp->next;
   }
    NewNode->prev = temp;
    NewNode->next = temp->next;
    temp->next = NewNode;
    cout<<"inserted before a node"<<endl;
}

void Cicrularlinklist()
{
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node*temp1=head;
    temp->next=temp1;
    temp1->prev=temp;
}

void Display()
{
    Node* temp = head;
    if (head == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }
    cout << "Doubly Linked List: " << " ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    insertNode(1);
    insertNode(2);
    insertNode(3);
    insertNode(4);
    insertNode(5);
    Display();
    insertBeforeANode(2,6);
    Display();
}



