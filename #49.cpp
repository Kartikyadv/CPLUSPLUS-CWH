#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    assignment + other code;
}
*/
class Test{
    // int b;// SOLUTION TO THE PROBLEM
    int a; 
    int b;
    public:
    // Test (int i, int j) : a(i), b(j) //This is known as initialization section 
    // Test (int i, int j) : a(i), b(i+j-3) //This is known as initialization section 
    // Test (int i, int j) : a(i), b(a + j) //This is known as initialization section 
    // Test (int i, int j) : b(j), a(i+b) // This will create PROBLEM BCOZ A WILL BE 
                                        //INITIALIZE 1ST 
    Test (int i, int j): a(j), b(i)
    {
        cout<<" A = "<<a<<" B = "<<b;
    }
};

int main(){
    Test t(3,4);
    return 0;
}