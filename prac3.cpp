// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={12,23,45,56,34};
//     int i,size,pos,num;
//     size=sizeof(arr)/sizeof(arr[0]);
    
//     cout<<"the size of array is\n";
//     cout<<size<<endl;

//     cout<<"your previous array was\n";
//     for(i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }

//     cout<<"enter the number which you want to insert\n";
//     cin>>num;
//     cout<<"enter the index where you want to insert\n";
//     cin>>pos;
//     size++;
//     for(i=size; i>pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos]=num;
 
//     cout<<"new array after insertion\n";
//      for(i=0;i<6;i++){
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }




#include<iostream>
using namespace std;
int main(){
    int arr[]={34,56,89,7,86};
    int pos, i, size;
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<"previous array\n";
    for(i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"enter the index number to delete that particular element\n";
    cin>>pos;
    for (i=pos; i<size; i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"your new aarray after deletation\n";
    for(i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}