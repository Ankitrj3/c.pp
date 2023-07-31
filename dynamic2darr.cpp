#include<iostream>
using namespace std;

int main(){
   int a,b;
   cout<<"enter the size of 2d array"<<endl;
   cin>>a >>b;
   int arr[a][b];
   cout<<"enter the values in 2d array"<<endl;
   for(int i = 0; i<a; i++){
    for(int j = 0; j<b; j++){
        cin>>arr[i][j];
    }
   }
   cout<<"printing the values in 2d array"<<endl;
   for(int i = 0; i<a; i++){
    for(int j = 0; j<b; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}