// #include<iostream>
// using namespace std;
// enum color{red , blue, green};
// int main()
// {
//     color x;
//     x= green;
//     cout<<x;
//     return 0;
// }


#include<iostream>
using namespace std;

enum week{sun,mon,tue,wed,thu,fri,sat};
int main(){
    week day;
    day=mon;
    switch(day){
        case 0:
        cout<<"Sunday"; break;
        case 1:
        cout<<"Monday"; break;
        case 2:
        cout<<"Tuesday"; break;
        case 3:
        cout<<"Wednesday"; break;
        case 4:
        cout<<"Thrusday"; break;
        case 5:
        cout<<"Friday"; break;
        default:
        cout<<"Invalid input"; 
    }

    return 0;
}