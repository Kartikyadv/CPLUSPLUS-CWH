#include<iostream>
#include<map>
#include<string>
using namespace std;

// MAP IS AN ASSOCIATIVE ARRAY
int main(){
    map<string, int > marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
        // (*iter).first = Harry
        // (*iter).second = 98
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}