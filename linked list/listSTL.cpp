#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void printlist(list<int> ll){
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<*itr<<" hello";
    }
}
int main()
{
    list<int> ll;
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.push_front(9);
    ll.push_front(10);
    printlist(ll);
    
}