#include<iostream>
using namespace std;

void bubbleSorting(int Array[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(Array[j]>Array[j+1]){
               int temp=Array[j];
               Array[j]=Array[j+1];
               Array[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Size for array : ";
    cin>>n;

    int Array[n];
    cout<<"Elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }

   bubbleSorting(Array,n);
   cout<<"Sorted Array : ";
   for(int i=0;i<n;i++)
   {
       cout<<Array[i]<<" ";
   }
}
