#include<iostream>
using namespace std;

int main(){
    // What is a pointer?   ---->  data type which holds the address of other data types
    int a = 3;
    int * b = &a;
    // &   ----> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;


    // *   ----> (Value at)  Dereference of operator
    cout<<"The value at address b is "<<*b<<endl;


    int **c = &b;
    // Pointer to pointer
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) c is "<<**c<<endl;
    return 0;
}