#include<iostream>
using namespace std;
int main(){
    int tan[20][20];
    int r;
    cout<<"Enter the Row Number: ";
    cin>>r;
    int c;
    cout<<"Enter the colume number:";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            tan[j][i]=arr[i][j];
        }
        
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<tan[i][j]<<"\t";;
        }
        cout<<endl;
    }

    return 0;
}