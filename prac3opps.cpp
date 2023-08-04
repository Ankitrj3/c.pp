// #include<iostream>
// using namespace std;

// class info{
// public:

//       string name;
//       int age;
//       string collage;
//       int year;
// };
// int main(){
    
//     info *k2 = new info();
//     k2->name="ankit ranjan";
//     k2->age=19;
//     k2->collage="lpu";
//     k2->year=2;
    
//     cout<<"your name is "<<k2->name<<endl;
//     cout<<"your age is "<<k2->age<<endl;
//     cout<<"your collage is "<<k2->collage<<endl;
//     cout<<"your year is "<<k2->year<<endl;
    
    
//     info *k3 = new info();
//     k3->name="saurabh patel";
//     k3->age=19;
//     k3->collage="bhu";
//     k3->year=1;
    
//     cout<<"your name is "<<k3->name<<endl;
//     cout<<"your age is "<<k3->age<<endl;
//     cout<<"your collage is "<<k3->collage<<endl;
//     cout<<"your year is "<<k3->year;
    
    
//     return 0;
// }

#include<iostream>
using namespace std;

class student{
public:    
    //constructor
    string a,c;
    int b;
    student(string name, int roll, string depart){//perameterised constructor
        a=name;
        b=roll;
        c=depart;
    }
    student(){//default constructor
        a="_";
        b=0;
        c="_";
    }
    
    student(student& e){//copy constructor
        a=e.a;
        b=e.b;
        c=e.c;
    }
};

int main(){
    student k2("ankit",4,"cse");
    cout<<k2.a<<endl;
    cout<<k2.b<<endl;
    cout<<k2.c<<endl;
    
    student k3;
    cout<<k3.a<<endl;
    cout<<k3.b<<endl;
    cout<<k3.c<<endl;
    
    student k5=k2;
    cout<<k5.a<<endl;
    cout<<k5.b<<endl;
    cout<<k5.c<<endl;
    
    
    return 0;
}