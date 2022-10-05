#include<bits/stdc++.h>
using namespace std;
int main(){
int a[10] = {1,2,3,5,6,3,2,3,1,10};
int n,coun=0;
cout<<"Enter A Number"<<"\n";
cin>>n;
    for(int i = 0; i<10; i++){
        if(n == a[i]) 
            coun++;
    }

    cout<<coun;
} 