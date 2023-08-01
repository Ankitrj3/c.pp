#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

namespace x {
        int a =12;
    }
namespace y {
        int a =45;
    }
    

int main(){
    // :: this is scope resolution operator
    
// << >> these are insertion operator



    /*cout<<"hello ankit "<<endl;
    float sq,res;
    cout<<"enter the value to find the square root of that particular number"<<endl;
    cin>>sq;
    res=sqrt(sq);
    cout<<"the result of square root is "<<res;*/

    
    // cout<<x::a<<endl;
    // cout<<y::a;


    
    double a,b,result;
    cout<<"enter the value of a to find the sum of two numbeers"<<endl;
    cin>>a;
    cout<<"enter the value of b to find the sum of two numbeers"<<endl;
    cin>>b;
    result=a+b;

     cout<<"the result of a and b is "<<result<<endl;
    cout<<fixed<<setprecision(2)<<result;

    

    return 0;

}