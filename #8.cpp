#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    // int a  = 34;
    // cout<<"The value of a was : "<<a<<endl;
    //  a  = 45;
    // cout<<"The value of a is : "<<a;




    // Constants in C++
    // const float a = 3.11;
    // cout<<"The value of a was : "<<a<<endl;
    // a  = 45.6;// not valid because of const
    // cout<<"The value of a is : "<<a;


    // Manipulator are those operator which help in formating data display
    // 2 Manipulator ( 1. endl)  (2. setw())
     int a=3, b=78, c=1233;
     cout<<"The value of a is : "<< setw(4)<<a<<endl;
     cout<<"The value of b is : "<< setw(4)<<b<<endl;
     cout<<"The value of c is : "<< setw(4)<<c<<endl;

     cout<<"The value of a is : "<<a<<endl;
     cout<<"The value of b is : "<<b<<endl;
     cout<<"The value of c is : "<<c<<endl;


    // Operator Precedence
    // int a=3,b=4;
    // int c = a*5+b-45+87;
    // cout<<c;
    cout<<endl;
    return 0;
}
 