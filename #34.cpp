#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(){a=0;};
    Number(int num){
        a= num;
    }
    // !!!!!IMP!!!!! When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){
        cout<<"Copy constructor called !!!!"<<endl;
        a= obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(z);// Copy constructor invoked BCOZ it is been maked in this line
    z1.display();

    z2 = z;// Copy constructor not invoked BCOZ it is already made in 1st line
    z2.display();

    Number z3 = z; // Copy constructor invoked BCOZ it is been maked in SAME line
    z3.display();
    // z1 should exactly resemble z or x or y
    return 0;
}