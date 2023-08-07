#include<iostream>
using namespace std;

class sample{
    int roll;
    char name[50];
public:
    void getdata();
    void putdata();
};

inline void sample :: getdata(){
    cout<<"enter the roll no\n";
    cin>>roll;
    cout<<"enter the name \n";
    cin>>name;
    cin.ignore();
    cin.getline(name,50);
}
inline void sample :: putdata(){
    cout<<roll<<endl;
    cout<<name<<endl;
}
int main(){
    sample a[5];//object declaration
    for(int i=0; i<5; i++){
        a[i].getdata();
    }
    for(int i=0; i<5; i++){
        a[i].putdata();
    }
    return 0;
}