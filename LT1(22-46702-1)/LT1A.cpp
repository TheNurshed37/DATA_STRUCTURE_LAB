#include<iostream>
using namespace std;

int main()
{
    int array[13]= {1,2,3,4,5,6,7,8,9,10,11,12,13};

    cout<<"Array in Sequentially: ";
    for(int i=0; i<13; i++)
    {
        cout<<array[i]<<'\t';
    }
    cout<<endl;
    cout<<"Array in Reverse order: ";
    for(int i=12; i>=0; i--)
    {
        cout<<array[i]<<'\t';
    }
}
