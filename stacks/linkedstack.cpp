#include<iostream>
#include<vector>
#include<list>

using namespace std;
class stack{
    vector<int> vec;
    public:
    void push(int val){
        vec.push_back(val);
    }
    int pop(){
        if(isempty()){
            cout<<"empty stack";
            return 0;
        }
        vec.pop_back();
    }
    int top(){
        int lastidx=vec.size()-1;
        return vec[lastidx];
    }
    bool isempty(){
        return vec.size()==0;
    }

};

int main()
{
    stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(897);
    s.pop();
    cout<<s.isempty();

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

}