#include<iostream>
// there are 2 types header file
// 1. System header file : It comes with the compiler
// EX = #include<iostream>
// 2. User defined header file : It is written by the user
//EX=#include<arith.h>=This will produce an error if arith.h is not present in the current directory
using namespace std;

int main()
{
    int a = 3, b= 4;
    // cout<<"Operators in C++"<<endl;// endl for new line
    // cout<<"Following are the types of Operators in C++"<<endl;// endl for new line
    // Arithmetic operators
    // cout<<"The value of a + b is "<<a+b<<endl;
    // cout<<"The value of a - b is "<<a-b<<endl;
    // cout<<"The value of a * b is "<<a*b<<endl;
    // cout<<"The value of a / b is "<<a/b<<endl;
    // cout<<"The value of a % b is "<<a%b<<endl;
    // cout<<"The value of a ++ is "<<a++<<endl;// 1st print then add
    // cout<<"The value of a -- is "<<a--<<endl;// 1st print then sub
    // cout<<"The value of --a is "<<--a<<endl;// 1st sub then print 
    // cout<<"The value of ++a is "<<++a<<endl;// 1st add then print

    //Assignment operators(=)  --> ised to assign values to variables
    // int a = 3;

    // Comparison operators (==,>,<,!=,>=,<=)
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // logical operartor(&&,  ||,  !)
    return 0;
}

