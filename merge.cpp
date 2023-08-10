#include<iostream>
using namespace std;
int main(){
      int s1,s2,s3;
      int array1[]={1,2,4};
      int array2[]={5,6,7};
      s1=sizeof(array1)/sizeof(array1[0]);
      s2=sizeof(array2)/sizeof(array2[0]);

      s3=s1+s2;

      int mergearray[s3];

      for(int i=0; i<s1; i++ ){
        mergearray[i]=array1[i];
      }

      for(int i=0; i<s2; i++ ){
        mergearray[s1+i]=array2[i];
      }

      for(int i=0; i<s3; i++){
        cout<<mergearray[i];
      }
}