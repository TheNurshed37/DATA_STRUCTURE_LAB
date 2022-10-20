#include<iostream>
using namespace std;

int main()
{
    int A[6]= {1,3,7,2,19,91};
    int n,counter=0;
    cout<<"Search a number : ";
    cin>>n;

    for(int i=0;i<6; i++)
    {
        if(n==A[i])
        {
            cout<<n<<" has been found at index no: "<<i;

            counter++;
        }
    }

    if(counter==0)
    {
        cout<<n<<" has not been found "<<endl;
    }

    return 0;
}
