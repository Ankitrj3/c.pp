#include<iostream>
using namespace std;

class rectrangle{
  private:
         int len,wid,area;
         static int count;
         
  public:
        void getdata(void){
            cout<<"enter the value of length and width"<<endl;
            cin>>len>>wid;
            count++;
        }
        
        void areaofrectrangle(void){
            area = len*wid;
            cout<<"the area of rectrangle is "<<area<<endl;
            }
        
        static void getcount(){
            cout<<"the user find area of rectrangle  "<<count<<"  times"<<endl;
        }
        
};

int rectrangle :: count;

int main(){
    
    rectrangle ob1,ob2;
    
    ob1.getdata();
    ob1.areaofrectrangle();
    
    
    ob2.getdata();
    ob2.areaofrectrangle();
    
    rectrangle::getcount();
    
    
    return 0;
}




//this code is modified code by using loop we are creating the object 

// #include<iostream>
// using namespace std;

// class rectrangle{
//   private:
//          int len,wid,area;
//          static int count;
         
//   public:
//         void getdata(void){
//             cout<<"enter the value of length and width"<<endl;
//             cin>>len>>wid;
//             count++;
//         }
        
//         void areaofrectrangle(void){
//             area = len*wid;
//             cout<<"the area of rectrangle is "<<area<<endl;
//             }
        
//         static void getcount(){
//             cout<<"the user find area of rectrangle  "<<count<<"  times"<<endl;
//         }
        
// };

// int rectrangle :: count;

// int main(){
    
//     rectrangle ob[5];
    
// for(int i=0; i<5; i++){
//     ob[i].getdata();
//     ob[i].areaofrectrangle();
// }
    
   

//     rectrangle::getcount();
    
    
    
//     return 0;
// }