#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter the months to check that you in which month"<<endl;
    cin>>m;
    
    switch(m){
        case 1:
            cout<<"jan";
            break;
        case 2:
            cout<<"feb";
            break;
        case 3:
            cout<<"mar";
            break;
        case 4:
            cout<<"apr";
            break;
        case 5:
            cout<<"may";
            break;
        case 6:
            cout<<"jun";
            break;
        case 7:
            cout<<"july";
            break;
        case 8:
            cout<<"aug";
            break;
        case 9:
            cout<<"sept";
            break;
        case 10:
            cout<<"oct";
            break;
        case 11:
            cout<<"nov";
            break;
        case 12:
            cout<<"dec";
            break;
        default:
            cout<<"the invalid number you have entered";
    }
}