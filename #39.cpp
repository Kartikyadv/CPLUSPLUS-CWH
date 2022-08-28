/*
                    public derivation   private derivation  protected derivation
1.  Private members  - NOT INHERITED       NOT INHERITED       NOT INHERITED
2.  Protected members-  PROTECTED           PRIVATE             PROTECTED
3.  Public members   -  PUBLIC              PRIVATE             PROTECTED
*/
#include<iostream>
using namespace std;

class Base{
    protected:
    int a;
    private:
    int b;

};
class Derived : protected Base{

};
int main(){
    Base b;
    Derived d;
    // cout<<d.a;// WILL NOT WORK SINCE A IS PROTECTED IN BOTH BASE AS WELL AS DERIVED CLASS'
    return 0;
}