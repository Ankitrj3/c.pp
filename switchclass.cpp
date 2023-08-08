#include<iostream>
using namespace std;
class weak{
private:
       int days;
public: 
       void getdata(){
        cin>>days;
       }
       void putdata(){
        switch(days){
        case 0:
        cout<<"Weekend\n";
        break;
        case 1:
        cout<<"Sunday\n";
        break;
        case 2:
        cout<<"Monday\n";
        break;
        case 3:
        cout<<"Tuesday\n";
        break;
        case 4:
        cout<<"Wednesday\n";
        break;
        case 5:
        cout<<"Thursday\n";
        break;
        case 6:
        cout<<"Friday\n";
        break;
        case 7:
        cout<<"Saturday";
        break;
        default:
        cout<<"Invaild";
        
     }
   }
 };

int main(){

    weak d1;
    d1.getdata();
    d1.putdata();
     
    return 0;
}