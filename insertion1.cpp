#include<iostream>
using namespace std;
int main(){
    int size,num,pos,i;
    int arr[50]={89,34,23,12,56};
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<"prevoius array was\n";
    for(i=0; i<5; i++){
        cout<<arr[i]<<"\n";
    }cout<<endl;

    cout<<"enter the value which you want to enter\n";
    cin>>num;
    cout<<"enter the position where you want to insert\n";
    cin>>pos;

    for(i=5; i>=pos-1; i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    cout<<"new array"<<endl;
    for(i=0; i<6; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}