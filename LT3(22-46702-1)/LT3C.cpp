#include<iostream>
using namespace std;
struct Employ{
    string id;
    string daptname;
    int sal;
    int joinyear;
};
int main(){
	int a=10;
    struct Employ info[a];
    for(int i=0;i<a;i++)
    {
        cin>>info[i].id;
        cin>>info[i].daptname;
        cin>>info[i].sal;
        //cout<<"Enter Join Year:";
        cin>>info[i].joinyear;
    }
    for(int i=0;i<a;i++){
        if(info[i].sal>20000 && info[i].joinyear<2009){
            cout<<info[i].id<<endl;
        }
    }
}
