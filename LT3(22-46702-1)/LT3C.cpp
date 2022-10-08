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
   // struct Employ record[10];
    struct Employ info[a];
    for(int i=0;i<a;i++){
        //cout<<"Enter ID:";
        cin>>info[i].id;
        //cout<<"Enter Deptname:";
        cin>>info[i].daptname;
        //cout<<"Enter Salae:";
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