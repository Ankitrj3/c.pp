#include<iostream>
using namespace std;
//class is containing two variables and two methods(function)
class student {
private:
        string name;
        int rollno;

public:
      void getdata(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter rollno"<<endl;
        cin>>rollno;
      }
      void display(){
        cout<<"your name is "<<name<<endl;
        cout<<"your rollno is " <<rollno<<endl;
      }
};
int main (){
    student *k3 = new student();
    student *k4 = new student();
    k3->getdata();
    k4->getdata();
    k3->display();
    k4->display();
    return 0;
}