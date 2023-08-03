#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cout<<"enter the size of array"<<endl;
    cin>>a;
    int arr[a];
    cout<<"enter the elements in array"<<endl;
    for (int i = 0; i < a; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}