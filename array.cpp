#include<iostream>
using namespace std;

int main(){
    
    int arr[4];
    for(int i ; i<4 ; i++){
        cout<<"enter the marks of "<<i<<"th"<<endl;
        cin>>arr[i];
    }
    for(int i;i<4;i++){
        cout<<"your entered marks are"<<arr[i]<<"marks "<<i<<"th student"<<endl ;
    }
}