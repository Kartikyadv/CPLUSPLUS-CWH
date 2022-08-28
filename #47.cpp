#include<iostream>
#include<math.h>
using namespace std;

class Calculator{
    protected:
    int a, b;
    public:
    void getDataSim(){
        cout<<"Enter the value of a :"<<endl;
        cin>>a;
        cout<<"Enter the value of b :"<<endl;
        cin>>b;
    }
    void performOperations(){
        cout<<""<<a<<" + "<<b<<" = "<<a+b<<endl;
        cout<<""<<a<<" - "<<b<<" = "<<a-b<<endl;
        cout<<""<<a<<" * "<<b<<" = "<<a*b<<endl;
        cout<<""<<a<<" / "<<b<<" = "<<float(a)/b<<endl;
    }
};

class ScientificCalculator{
    protected:
    int a;
    public:
    void getDataSci(){
        cout<<"Enter the value of a :"<<endl;
        cin>>a;
    }
    void performScientificOperations(){
        cout<<"The value of sin(a) : "<< sin(a)<<endl;
        cout<<"The value of cos(a) : "<< cos(a)<<endl;
        cout<<"The value of tan(a) : "<< tan(a)<<endl;
        cout<<"The value of exp(a) : "<< exp(a)<<endl;
    }
};

class HybridCalculator : public Calculator, public ScientificCalculator{

};
int main(){
    // ScientificCalculator c;
    // c.getData();
    // c.performScientificOperations();
    HybridCalculator calc;
    calc.getDataSci();
    calc.performScientificOperations();
    calc.getDataSim();
    calc.performOperations();
    return 0;
}