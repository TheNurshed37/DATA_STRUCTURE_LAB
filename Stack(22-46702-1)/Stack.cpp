#include<iostream>
using namespace std;

int stack[7];
int top;

bool isEmpty(){
    if(top == -1)
        return true;
    else
        return false;
}

bool isFull(){
    if(top==7)
        return true;
    else
        return false;
}

void push(int a){
    if(isFull())
    {
        cout<<"Can't push anymore! Stack is full"<<endl;
    }
    else{
        stack[top++]=a;
        cout<<"Element has been Pushed!"<<endl;
    }
}

void pop(){
    if(isEmpty())
    {
        cout<<"Can't pop more element! Stack is empty"<<endl;
    }
    else{
        top--;
        cout<<"Value has been Poped!"<<endl;
    }
}

int topElement(){
	cout<<"Top Element is: "<<stack[top - 1]<<endl;
}

void show(){
	if(isEmpty())
        {
            cout<<"Can't show any values! Stack is empty"<<endl;
            return;
    }
    else{
        cout<<"The Stack: ";
        for(int i=top-1;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    push(2);
    push(3);
    push(5);
    push(6);
    push(8);
    push(9);
    push(11);
    push(12);
    push(15);

    topElement();
    show();

    pop();
    pop();
    pop();
    topElement();
    show();
}






















