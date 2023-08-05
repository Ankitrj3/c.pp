#include<iostream>
using namespace std;
class doctor{
    private:
            string name;
            string add;
            int ward;
    public:
    void getdata();
    void display();
        };
    void doctor::getdata(){
        cout<<"enter name"<<endl;
        cin>>name;//cin.getline(name,30);//if we use the [char] datatype then it read only one word so that's we used getline function to read two or more words in variable
        cout<<"enter the address"<<endl;
        cin>>add;
        cout<<"enter the ward"<<endl;
        cin>>ward;
    }
    void doctor::display(){
        cout<<name<<endl;
        cout<<add<<endl;
        cout<<ward<<endl;
    }    

int main(){
          doctor *an = new doctor();
          an->getdata();
          an->display();

 return 0;

}