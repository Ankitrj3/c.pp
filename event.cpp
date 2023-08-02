//person attend on first day and second day is double
//then in third day it is half of first day

//s=x+2x+x/2


#include<iostream>
using namespace std;

int main(){
    long sum;
    double x;
    cout<<"enter the total number of student who attend the webinar"<<endl;
    cin>>sum;
    x=(2*sum)/7;
    cout<<"DAY 1 ="<<x<<endl;
    cout<<"DAY 2 ="<<x*2<<endl;
    cout<<"DAY 3 ="<<x/2<<endl;

}