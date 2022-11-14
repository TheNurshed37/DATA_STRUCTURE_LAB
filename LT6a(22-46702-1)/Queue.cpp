#include<iostream>
using namespace std;

class myQueue{
            int Array[7],front, rear;

public:
    myQueue()
    {
        front=-1;
        rear=-1;

        for(int i=0; i<7; i++)
        {
            Array[i]=0;
        }
    }

    bool isEmpty()
    {
        if(((front==-1) && (rear==-1)) || (front>rear))
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(rear==6)
            return true;
        else
            return false;
    }

    void Enqueue(int a)
    {
        if(isFull())
        {
            cout<<"Can't Enqueue more! Queue is full"<<endl;
            return;
        }
        else if(isEmpty())
        {
            cout<<"Enqueue Successful"<<endl;
            front=0;
            rear=0;
            Array[rear]=a;
        }
        else
        {
            cout<<"Enqueue Successful"<<endl;
            rear++;
            Array[rear]=a;
        }
    }

    int Dequeue()
    {
        int x=0;

        if(isEmpty())
        {
            cout<<"Can't Dequeue more! Queue is Empty"<<endl;
            return x;
        }
        else if(rear==front)
        {
            cout<<"Dequeue Successful"<<endl;
            x=Array[rear];
            rear=-1;
            front=-1;
            return x;
        }
        else
        {
            cout<<"Dequeue Successful"<<endl;
            x=Array[front];
            front++;
            return x;
        }
    }

    int showFront()
    {
        if(isEmpty())
        {
            cout<<"Front has not found! Queue is empty"<<endl;
        }
        else
        {
            cout<<"Front: "<<Array[front];
        }
        cout<<endl;
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"Can't Show! Queue is Empty"<<endl;
        }
        else
        {
            cout<<"The Queue :";
            for(int i=front; i<=rear; i++)
            {
                cout<<Array[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    myQueue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    q.Enqueue(60);
    q.Enqueue(70);
    q.Enqueue(80);
    q.showFront();
    q.display();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.showFront();
    q.display();
}
