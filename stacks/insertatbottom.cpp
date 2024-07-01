#include<iostream>
#include<vector>
#include<stack>
using namespace std;


//prints
void printstack(stack<int>&s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}


//inserts at bottom
void insertatbottom(stack<int>&s,int val)
{
    if(s.empty()){
        s.push(val);
        return;
    }
    int top=s.top();
    s.pop();
    insertatbottom(s,val);
    s.push(top);
}



//reverses a stack
void revstack(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    revstack(s);
    insertatbottom(s,temp);
}

int main()
{
    stack<char>s;
    s.push('a');
    s.push('b');
    s.push(30);
    insertatbottom(s,8);
    revstack(s);
    printstack(s);
}