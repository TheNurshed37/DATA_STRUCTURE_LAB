#include<iostream>
using namespace std;

void oddNumFunc(int range1,int range2)
{
    int arr[18]={1,2,6,7,8,9,11,24,37,54,55,96,77,88,91,13,14,17};

    cout<<"Odd Numbers: ";
    for(int i=0;i<18;i++)
    {
        for(int j=range1;j<=range2;j++)
        {
            if(arr[i]==j&&j%2!=0) cout<<j<<'\t';
        }
    }
}
int main()
{
    int range1,range2;
    cout<<"Enter the Ranges: "<<endl;
    cin>>range1>>range2;

    oddNumFunc(range1,range2);
}
