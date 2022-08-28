/*
                    public derivation   private derivation  protected derivation
1.  Private members  - NOT INHERITED       NOT INHERITED       NOT INHERITED
2.  Protected members-  PROTECTED           PRIVATE             PROTECTED
3.  Public members   -  PUBLIC              PRIVATE             PROTECTED
*/
/*          ************Syntax for inheriting in multiple inheritence****************
class Derived : visibility-mode base1, visibility-mode base2
{
    Class body of class "DerivedC"
};*/
#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public Base1, public Base2
{
    public:
    void show(){
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base2 is "<<base2int<<endl;
        cout<<"The sum of these values is "<< base1int + base2int <<endl;
    }
};
/*
The inherited derived class will look something like this:
Data members:
    base1int---> protected
    base2int  --> protected
Members function:
    set_base1int() --> public
    set_base2int() --> public
    set_show() --> public
*/
int main()
{
    derived harry;
    harry.set_base1int(25);
    harry.set_base2int(25);
    harry.show();
    return 0;
}




