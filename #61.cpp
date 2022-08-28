#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // CONNECTING OUR FILE WITH KARTIK STREAM
    ofstream kartik("sample60.txt");// PIPE DALDIA FROM SMPL60.TXT ---61.CP

//CREATING A NAME STRING AND FILLING IT WITH THE STRING ENTERED BY THE USER
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;

    // WRITING A STRING TO THE FILE
    kartik<<"My name is " + name;

    kartik.close();//PIPE BAND KRDIA

    ifstream kartik2("sample60.txt");
    string content;
    // kartik2>>content;
    getline(kartik2 , content );
    cout<<"The content of this file is : "<<content<<endl;

    kartik2.close();
    return 0;
}