
// Derived class SYNTAX
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class becomes PUbLIC members of the derived class
3. Private Visibility Mode: Public members of the base class becomes PRIVATE members of the derived class
4. Private members are never inherited
*/
#include <iostream>
using namespace std;
// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
class Programmer : public Employee
{
public:
    int languageCode;
void getData(){
    cout<<id<<endl;
}
    Programmer(int inpId)
    {
    languageCode = 9;
        id = inpId;
    }
};
// Creating a Programmer class derived form Employee Base class
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}