// types of constructor 
// default constructor 
// parameterised constructor
// copy constructor

#include<iostream>
using namespace std;

class rectriangle{
public:
      int l;
      int b;
    //constructor name should be same as name of its class
 
    rectriangle(){//default constructor
        l=0;
        b=0;
    }

    rectriangle(int x, int y){//parameterised constructor
    l=x;
    b=y;

    }
    rectriangle(rectriangle& r){//copy constructor--intalize the object by another existing object
    l=r.l;
    b=r.b;
    
    }
};
int main(){
    rectriangle k1;
    cout<<k1.l<<"  "<<k1.b<<endl;
     
    rectriangle r2( 12,90);
    cout<<r2.l<<endl<<r2.b<<endl;

    rectriangle r3 = r2;
    cout<<r3.l<<"  "<<r3.b;

    return 0;

}