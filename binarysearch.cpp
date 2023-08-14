#include<iostream>
using namespace std;

int binarysearch(int arr[] , int a , int key){
    int start=0;
    int end=a-1;

    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            return end = mid + 1;
        }
        else if(arr[mid]>key){
            return start = mid - 1;
        }
        
    }
    return -1;
}

int main(){
    int a,key,result;
    cout<<"enter the size of array"<<endl;
    cin>>a;
    int arr[a];
    cout<<"enter the values in ascending order\n";
    for(int i = 0; i<a; i++){
        
        cin>>arr[i];
    }

    cout<<"enter the element which do you want to search\n";
    cin>>key;

   

    result=binarysearch(arr,a,key);
     
  
    if(k != -1){
        cout<<"your result is "<<result;
    }else{
        cout<<"element is not present";
    }

    

}