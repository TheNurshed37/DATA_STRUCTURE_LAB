#include<iostream>
using namespace std;

int main()
{
    string S;
    cout<<"Enter your Sentence : ";
    getline(cin,S);
    int t,x = 2;
    int forchange;
    cout<<"Input how many word you want to proceed : ";
    cin>>forchange;
    for(int i = x; i<S.size(); i += x){
        t = S[i];
        S[i] = (char)(t + forchange);
    }
    cout<<"Changed sentence : "<<S;

}
