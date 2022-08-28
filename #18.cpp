#include<iostream>
using namespace std;


int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
int fibSeries(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    else {
        return fibSeries(n-2) + fibSeries(n-1);
    }
}
int main(){
    int n, result;
    cout<<"Enter number of terms you want to print of fibonacci series :";
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        result = fibSeries(i);
        cout<<"   "<<result;
    }
    cout<<endl;













    // Factorial of a number:
    // int n;
    // cout<<"Enter a number :"<<endl;
    // cin>>n;
    // cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;



    return 0;
}