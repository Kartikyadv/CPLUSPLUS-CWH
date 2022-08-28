#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int  a;
    cout<<glo;
    cout<<"\n";
}
// local precidence >>> global presidence
int main()
{
    int a = 4, b = 5, glo =9;
    glo=78;
    float pi=3.14;
    char s ='u';
    bool is_true = true;
    sum();
    cout<<is_true;
    // false = 0 and true = 1
    cout<<"This is tutorial 4. Here the value of A is "<<a<<".\nThe value of B is "<<b;
    cout<<"\nThe value of pi is :"<<pi;
    cout<<"\nThe value of char is :"<<s;
    cout<<"\n";
    return 0;
}
