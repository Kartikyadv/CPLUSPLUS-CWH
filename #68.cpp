#include<iostream>
using namespace std;

template <class T>
class Kartik{
    public:
    T data;
    Kartik(T a){
        data = a;
    }
    void display();
};
template <class T>
void Kartik<T>:: display(){
        cout<<data;
    }

    void func(int a){
        cout<<"I am first func() "<<a<<endl;
    }

    template <class T>
    void func(T a){
        cout<<"I am templatised func() "<<a<<endl;
    }
    template <class T>
    void func1(T a){
        cout<<"I am templatised func() "<<a<<endl;
    }
int main(){
    // Kartik<char> k('c');
    // Kartik<int> k(5);
    // cout<<k.data<<endl;
    // k.display();

    // func(4); // EXACT MATCH TAKES THE HIGHER PRIORITY
    func1(4);
    return 0;
}