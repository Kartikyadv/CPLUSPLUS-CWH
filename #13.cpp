#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int marks[4] = {23, 45,56,89};
    // for(int i = 0; i<4; i++){
    //  marks[2] = 9;// Value can be changed
    // cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl;
    // }
    // while (i<4)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }





    // Pointers & Arrays
    int* p = marks;
    // for(int i =0; i< 4 ; i++){
    // cout<<"The value of marks "<<i<<" is "<<*(p+i)<<endl;
    // }
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}