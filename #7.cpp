#include<iostream>
using namespace std;
int c = 45;
int main()
{
    //***********************Build in Data types*************************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is : "<<c<<endl;
    // cout<<"The global c is : "<<::c;
    // // :: is known as scope resolution operator




    //***********************FLoat, double and long double Literals*************************
    // float d = 34.4;
    // long double e = 34.4;
    // 34.4 will be double
    // 34.4l||L will be long double
    // 34.4f||F will be floating point no.
    // cout<<"Size of 34.4 is : "<<sizeof(34.4)<<endl;
    // cout<<"Size of 34.4f is : "<<sizeof(34.4f)<<endl;
    // cout<<"Size of 34.4F is : "<<sizeof(34.4F)<<endl;
    // cout<<"Size of 34.4l is : "<<sizeof(34.4l)<<endl;
    // cout<<"Size of 34.4L is : "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is : "<<d<<endl<<"The value of e is : "<<e;




    //***********************Reference Variables************************
    // shubham ----->  shubh ---->    monty  -------> dangerous coder
    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;




    //***********************Typecasting************************
    // changing one variable into another variable (int    ->     float)
    int a = 45;
    float b = 45.456;
    cout<<"The value of a is :"<<(float)a<<endl;
    cout<<"The value of b is :"<<(float)b<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;

    
    cout<<"The expression is  "<< a+ b<<endl;
    cout<<"The expression is  "<< a+ (int)b<<endl;
    cout<<"The expression is  "<< a+ int(b)<<endl;
    cout<<endl;
    return 0;
}
