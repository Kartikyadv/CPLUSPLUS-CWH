#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
    cout<< *it<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; // List of 0 length    
    
    list1.push_back(5);
    list1.push_back(88);
    list1.push_back(99);
    list1.push_back(99);
    list1.push_back(22);
    display(list1);
    // REMOVING ELEMENT FROM THE LIST
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // list1.remove(99);
    // display(list1);

    // SORTING THE LIST
    // list1.sort();
    // display(list1);
    
    // Reversing the list
    // list1.reverse();
    // display(list1);

    list<int> list2(3); // Empty list of size 7    
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 90;
    iter++;
    *iter = 1;
    iter++;
    list2.sort();
    display(list2);

    // MERGING THE LIST
    // list1.merge(list2);
    // cout<<"List 1 after merging: ";
    // display(list1);
    return 0;
}