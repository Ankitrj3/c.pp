#include<iostream>
using namespace std;

int main(){
    //pointers are used to store the address of variables
    int a = 34;
    int * ank;
    ank=&a;
    cout<<"the value is "<<a<<endl;
    cout<<"the address is "<<&a<<endl;
    cout<<"the address is "<<ank<<endl;
    cout<<"the value is "<<*ank;


    return 0;
}