#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void) { cout << "The id of this employee is " << id << " and this is employee number " << count << endl; }
    static void getCount(void){
        // Static f(x) have access to ONLY other STATIC F(x) or VARIABLES
        // getData(); // this will give ERROR
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count; // default value will be 0
int main()
{
    // count is the static data member of class Employee
    Employee harry, rohan, lovish;
    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();
    return 0;
}