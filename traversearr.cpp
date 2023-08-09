#include<iostream>
using namespace std;

int main(){
    int arr[]={12,34,56,33,2456,24};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<"traverse array\n";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}