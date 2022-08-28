#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // Creating a Consructor
    // Constructor is a special member f(x) with same name as of the class .
    // Whenever an object is created , It is automatically invoked.
    // It is used to initialize the objects of its class

    Complex(void); // Constructor declaration
    void printNumber(){cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;}
};

Complex :: Complex(void){// ----> This is called default Condtructor
    a=0;b=0;
    // cout<<"Hello world"<<endl;
}
int main(){
    Complex c, c1, c2;
    c.printNumber();
    c1.printNumber();
    c2.printNumber();
    return 0;
    /*
                  Properties of Constructors
    1. It should be declared in the public section of the class .
    2. They are automatically invoked whenever the object is created.
    3. They cannot return vlaues and Do not have return types.
    4. It can have default arguments.
    5. We cannot refer to their adderess.
    */
}



























