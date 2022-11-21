#include <iostream>
using namespace std;

struct Node
{
  int element;
  struct Node* next;
};

struct Node* head = NULL;

void insertFront(int data)
{
  struct Node* new_node = new Node();

  new_node->element = data;
  new_node->next = head;
  head = new_node;
}

void insertBack(int data)
{
  struct Node* new_node = new Node();
  struct Node* last = head;

  new_node->element = data;
  new_node->next = NULL;

  if (head == NULL)
  {
    head = new_node;
  }

  else
  {
      while (last->next != NULL)
      {
        last = last->next;
      }

      last->next = new_node;
  }
}

void insertAfter(struct Node* prev_node, int data)
{
  if (prev_node == NULL)
  {
    cout << "The given previous node cannot be NULL!!"<<endl;
  }

  else
  {
    struct Node* new_node = new Node();

    new_node->element = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
  }
}

Node* removeFirstNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;

    delete temp;

    return head;
}

Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    return head;
}

void deleteFrom(int key)
{
  struct Node *temp = head, *prev;

  if (temp != NULL && temp->element == key)
  {
    head = temp->next;
    return;
  }

  while (temp != NULL && temp->element != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
      return;
  }

  prev->next = temp->next;

}

void printList(struct Node* node)
{
  while (node != NULL)
  {
    cout << node->element << " ";
    node = node->next;
  }
  cout << endl << endl;
}

int main()
{
  insertFront(55);
  insertFront(44);
  insertFront(33);
  insertFront(22);
  insertFront(11);


  printList(head);

  insertBack(1);
  insertBack(2);
  insertBack(3);
  insertBack(4);
  insertBack(5);


  printList(head);

  insertAfter(head->next->next->next->next, 90);


  printList(head);

  deleteFrom(3);
  deleteFrom(5);
  deleteFrom(55);

  printList(head);

  return 0;
}
