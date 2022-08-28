#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Display Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Display Base class variable var_base "<<var_base<<endl;
        cout<<"Display Derived class variable var_derived "<<var_derived<<endl;
    }

};

int main(){
    BaseClass * base_class_pointer;// Base type POINTER
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;// Pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 34;// WILL THROW ERROR BCOZ BASE TYPE POINTER
    base_class_pointer->display();// Base class f(x) CALLED

    
    DerivedClass * derived_class_pointer;// Derived type POINTER
    derived_class_pointer = &obj_derived;// Pointing Derived class pointer to derived class
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
} 