// fundamental unit of oop
// class is userdefine datatype

// objects are variable of type class

#include<iostream>
using namespace std;

class student{//by deafult property is private
public:
     string name;
     int roll;
};

int main(){
    
    //object
    student *ankit = new student();//create pointer variable and pointer variable should be  different from class name
    ankit ->name="ANKIT";
    ankit ->roll=4;
    cout<<ankit->name<<"-"<<ankit->roll<<endl;

    student *s1 = new student();
    s1->name="saurabh";
    s1->roll=9;
    cout<<s1->name<<"-"<<s1->roll<<endl;

    return 0;
}