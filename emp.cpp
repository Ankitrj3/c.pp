#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int empid;
    float salary;
    char depart;

    cout<<"enter the employee id"<<endl;
    cin>>empid;
    cout<<"enter the salary"<<endl;
    cin>>salary;
    cout<<"enter the first charter of your department"<<endl;
    cin>>depart;

    cout<<"emp id:"<<" "<<empid<<endl;
    cout<<"salary:"<< " " << fixed<<setprecision(2)<<salary<<endl;
    cout<<"department first charter:"<<"  "<<depart;

    return 0;

}