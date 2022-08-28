#include <iostream>
using namespace std;
int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;


    //Selectioin control structure : If-else ladder
    // if ((age < 18) && (age > 0))
    // {        cout << "You can not come to my party" << endl;}
    // else if (age < 1)
    // {        cout << "You are not yet born" << endl;    }
    // else if (age == 18)
    // {        cout << "You are a kid and you will kid pass to the party" << endl;}
    // else
    // {        cout << "You can come to the party" << endl;}

    //Selectioin control structure : If-else ladder
    switch (age)
    {
    case 18:
    cout<<"You are 1"<<endl;
        break;
    case 22:
    cout<<"You are 22"<<endl;
        break;
    case 2:
    cout<<"You are 2"<<endl;
        break;            
            
    default:
    cout<<"No special cases"<<endl;
        break;    }
    cout<<"Done with switch case"<<endl;
    return 0;
}
