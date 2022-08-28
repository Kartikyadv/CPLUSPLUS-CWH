#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;// 4  byte
    char favChar;// 1  byte
    float salary;// 4  byte
} ep;

// ********if u want only one data type in structure then you can use union*********
union money
{
    int rice;// 4  byte
    char car;// 1  byte
    float pounds;// 4  byte
};

 int main() {
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = breakfast;
    cout<<(m1==0);
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;




    // union money m1;
    // m1.rice = 34;
    // // m1.car = 'c'; // you can only use one thing 
    // cout<<m1.rice<<endl;



    //  struct employee kartik;
    //  ep harry;// ep is shortcut of "struct employee"
    //  harry.eId = 90;
    //  cout<<harry.eId<<endl;
    //  kartik.eId = 50;
    //  kartik.favChar = 'x';
    //  kartik.salary = 9909;
    //  cout<<kartik.eId<<endl;
    //  cout<<kartik.favChar<<endl;
    //  cout<<kartik.salary<<endl;
     return 0;
}