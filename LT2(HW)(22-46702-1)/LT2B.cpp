#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int array1[n],array2[50];
    for(int i = 0; i<n; i++){
        cin>>array1[i];
        array2[i] = -1;
    }
int count;
    for(int i = 0; i<n; i++){
            count = 1;
        for(int j = i+1; j<n; j++){
            if(array1[i] == array1[j]){
                count++;
                array2[j] = 0;
            }
        }
        if(array2[i] != 0) array2[i] = count;
    }

    for(int i = 0; i<n;i++){
        if(array2[i] != 0)
            cout<<array1[i]<<" occurs "<<array2[i]<<" times \n";
    }

}