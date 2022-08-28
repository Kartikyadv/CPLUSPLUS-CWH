#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me"<<endl;
    out<<"This is me"<<endl;
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    // getline(in, st);
    // getline(in, st2);
                     // OR
    while (in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
                         
    // in>>st;
    // cout<<st<<endl;
    // cout<<st2;
    return 0;
}