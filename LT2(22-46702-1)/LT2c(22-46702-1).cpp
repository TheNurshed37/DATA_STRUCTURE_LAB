#include<iostream>
using namespace std;

int main(){
    int i,j;

    int size;
    cin>>size;
    int arr[size];
    for( i = 0; i<size; i++)
        {
        cin>>arr[i];
        }

    for( i=0;i<size; i++)

        {

        for( j=0; j<i; j++){
            if(arr[i] == arr[j
               ])

               break;
        }

        if(i == j)
            cout<<arr[i]<<" ";
    }

}
