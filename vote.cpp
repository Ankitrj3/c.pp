#include<iostream>
using namespace std;

int main(){
    int vote ;
    cout<<"enter your age to check that you can vote or not"<<endl;
    cin>>vote;
    if(vote>101 || vote<1){
        cout<<"you can't vote your age is to take rest on bed or invalid age";
    }else if (vote>=18){
        
        cout<<"you can vote ";
    }
    else{
        cout<<"you can't vote";
    }
}