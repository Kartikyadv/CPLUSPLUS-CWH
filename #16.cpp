#include<iostream>
using namespace std;

int sum(int a, int b){
    int c  = a+b;
    return c;
}
// Call by reference (ADDRESS PASSED) using pointers
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main(){
    int x=4, y=5;
    cout<<"The sum of 4 and 5 is "<<sum(4, 5)<<endl;
    cout<<"Values before swaping x = "<<x<<" and y ="<<y<<endl;
    // swap(&x,&y); // This will swap x and y using pointer variables
     swapReferenceVar(x,y); // This will swap x and y using REFERENCE variables
    //  swapReferenceVar(x,y) = 766; // x will be 766
    cout<<"Values after swaping x = "<<x<<" and y ="<<y<<endl;
    return 0;
}