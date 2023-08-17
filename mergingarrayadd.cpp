// You are using GCC
#include<iostream>
using namespace std;

int main(){
int n;
int s,s1,s2,sum;
cin>>n;
int arr[n];
for(int i =0; i<n; i++){
    cin>>arr[i];
}
int a;
cin>>a;
int arr1[a];
for(int j=0 ; j<a; j++){
    cin>>arr1[j];
}
s=n;
s1=a;
s2=max(s,s1);

int arr2[s2];
for(int i=0; i<s2; i++){
    arr2[i]=0;
}
for(int i =0; i<s; i++){
    arr2[i]+=arr[i];
}

for(int i=0; i<s1; i++){
    arr2[i]+=arr1[i];
}

for(int i=0; i<s2; i++){
    cout<<arr2[i]<<" ";
}


}