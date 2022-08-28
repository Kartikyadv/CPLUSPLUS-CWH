#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using 2 arguments "<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"Using 3 arguments "<<endl;
    return a+b+c;
}
//volume of cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}
//volume of cube
int volume(int a){
    return (a*a*a);
}
//volume of rectangular
int volume(int l,int b, int h){
    return (l*b*h);
}
// *************Function Overloading**********************
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3 , 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"The volume of cylinder of 3 and 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of 6 is "<<volume(6)<<endl;
    cout<<"The volume of rectangle of 1, 2 and 3 is "<<volume(1,2,3)<<endl;
    return 0;
}