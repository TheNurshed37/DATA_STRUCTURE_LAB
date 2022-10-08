#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Input Row & Column : \n";
    cin>>x>>y;

    int arr[x][y];
    cout<<"Input Array : \n";
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Array : \n";
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    cout<<"Transposed Array : \n";
    for(int j = 0; j < y; j++){
        for(int i = 0; i < x; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
