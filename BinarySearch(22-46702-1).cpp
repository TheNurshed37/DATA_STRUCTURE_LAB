#include<iostream>
using namespace std;

int binarySearch(int number[],int x,int y)
{
    int last=0,first=x-1,middle;

    while(last<=first)
    {
        middle=(last+first)/2;

        if(y==number[middle])
        {
            return middle;
        }
        else if(y<number[middle])
        {
            first=middle-1;
        }
        else
        {
            last=middle+1;
        }
    }
}

int main()
{
    int number[]={1,2,3,4,5,6,7};
    int y;
    cout<<"Enter the number you are searching for : ";
    cin>>y;

    int x=sizeof(number)/sizeof(number[0]);
    int index =binarySearch(number,x,y);

    if(index!=-1)
    {
        cout<<"Number has been found at index "<<index;
    }
    else{
        cout<<"Number has not found ";
    }
    return 0;
}
