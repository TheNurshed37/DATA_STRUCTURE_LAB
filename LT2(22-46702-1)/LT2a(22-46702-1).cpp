#include<iostream>
using namespace std;
int main()
{
    int arrA[30], arrB[30], mergedArr[60];
	int a, b, i, j;

    cout<<"First Array"<<endl;
    cout<<"Size: ";
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>arrA[i];
        mergedArr[i] = arrA[i];
    }
    j = i;

    cout<<"Second Array"<<endl;
    cout<<"Size: ";
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>arrB[i];

        mergedArr[j] = arrB[i];
        j++;
    }

    cout<<"Merged Array in reverse order: ";

    for(int i=j-1; i>j; i--)
        cout<<mergedArr[i]<<" ";

    return 0;
}

