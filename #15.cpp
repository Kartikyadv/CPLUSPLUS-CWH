#include<iostream>
using namespace std;

// Function prototype     OR     Function declaration
// type function-name (arguments);
int sum(int a, int b);// Function declaration
// int sum(int a, b);// ----> Not Acceptable
// int sum(int ,int);// -----> Acceptable
int main(){
    void g();// Function declaration
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    // Formal parameters are a and b 
    //will be taking values from actual parameters num1 and num2
    int c  = a+b;
    return c;
}

void g(){
    cout<<"Hello , Good Morning"<<endl;
}