#include<iostream>
using namespace std;
union emp{
  int id;
  char name[30];
  char dob[15];
  char doj[15];
  float salary;
};
int main(){
    emp e1;
    cin>>e1.id;
    cout<<"ID:"<<" "<<e1.id;
    cin>>e1.name;
    cout<<"Name:"<<" "<<e1.name;
    cin>>e1.dob;
    cout<<"DOB:"<<" "<<e1.dob;
    cin>>e1.doj;
    cout<<"DOJ:"<<" "<<e1.doj;
    cin>>e1.salary;
    cout<<"Salary"<<" "<<e1.salary;

}