#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A & setData(int a){
        this->a = a;
        return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    // "this" is a keyword which is a pointer which points to the object which is being created
    // OR which invokes the member f(x)
    A a;
    a.setData(4).getData();
    a.getData();
    return 0;
}