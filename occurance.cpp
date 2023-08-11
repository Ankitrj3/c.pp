// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//   char str[40],search;
//   int i , count;

//   cout<<"enter any string\n";
//   cin>>str;
//   cout<<"enter any character by which you can find the number of occurance\n";
//   cin>>search;

//   while(str[i]!='\0'){
//     if(str[i]==search){
//       count++;
//     }
//     i++;
//   }
//   cout<<"total occurance of\t";
//   cout<<count;
// }

// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Occurrence{
    char n[50];
    char c;
    int count;
    
public:
     void countOccurrence(){
         cin>>n;
         cin>>c;
     }
     void display(){
         int i = 0;
         count = 0;
         while(n[i] != '\0'){
             if(n[i] == c){
                 count++;
             }
             i++;
         }
         cout<<count;
     }
};
int main(){
    Occurrence o;
    o.countOccurrence();
    o.display();
    
    return 0;
}