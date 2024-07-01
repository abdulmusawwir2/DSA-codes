#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>s;
    vector<int>::iterator it;
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    s.push_back(50);
    for (it = s.begin(); it< s.end(); it++)
    {
        cout<<*it<<endl;
    }
}