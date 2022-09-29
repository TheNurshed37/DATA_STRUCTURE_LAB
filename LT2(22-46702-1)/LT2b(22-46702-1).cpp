#include<iostream>
using namespace std;

int main()
{
    int arrA[30], arrB[30], arrC[10];
	int a, b, i, j, x, k=0, total;

    cout<<"First Array"<<endl;
    cout<<"Size: ";
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>arrA[i];
    }

    cout<<"Second Array"<<endl;
    cout<<"Size: ";
    cin>>b;
    for(int i=0; i<b; i++)
    {
        cin>>arrB[i];
    }

   for(int i=0; i<a; i++)
   {
      for(int j=0; j<b; j++)
      {
         if(arrA[i] == arrB[j])
         {
            total = 0;

            for(int x=0; x<k; x++)
            {
               if(arrA[i] == arrC[x])
                  total++;
            }

            if(total==0)
            {
               arrC[k] = arrA[i];
               k++;
            }
         }
      }
   }

   cout<<"Common Elements: ";
   for(i=0; i<k; i++)
      cout<<arrC[i]<<" ";
   return 0;
}
