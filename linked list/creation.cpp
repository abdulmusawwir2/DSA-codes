#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    public:
    node* head;
    node* tail;
    list(){
        head=NULL;
        tail=NULL;          
    }
    void push_front(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
   
    void push_back(int val){
        node* newnode = new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        tail->next=newnode;
        tail=newnode;
    }

    void display(node* head)
    {
        node* temp=head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        }
    }
};
node* delfront(node* head){
        node* temp=head;
        head = head->next;
        delete(temp);
        return head;
}


int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_back(6);
    ll.push_back(7);
    delfront(ll.head);
    ll.display(ll.head);
}