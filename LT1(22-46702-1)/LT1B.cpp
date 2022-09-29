#include<iostream>
using namespace std;

int main()
{
    //Array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array[n];
    cout<<"Enter the values of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    //Even-Odd
    for(int i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {
            cout<<"Even: "<<array[i]<<endl;
        }
        else
        {
            cout<<"Odd: "<<array[i]<<endl;
        }
    }

}
