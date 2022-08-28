#include<iostream>
using namespace std;
//  inline f(x) is not used when RECURSION, STATIC VARIABLES
// for short code inline f(x) is used
// inline int product(int a, int b){
//     static int c= 0; // This will execute only one time
//     c = c+1; // Next time this f(x) is run, the value of c will be retained
//     return a*b+c;
// }

float moneyReceived(int currentMoney, float factor=1.04){// float factor=1.04 is called DEFAULT ARGUMENTS
    return currentMoney*factor;
}
// int strlen(const char *p){// const char *p is called COSNTANT ARGUMENTS

// }
int main(){
    int money;
    cout<<"Enter money present in your bank account"<<endl;
    cin>>money;
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money)<<" after 1 year"<<endl; 
    cout<<"FOR VIP : If you have "<<money<<" Rs in your bank account, you will recieve "<<moneyReceived(money, 1.10)<<" after 1 year"<<endl;
    return 0;
}