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
    void display(node* head)
    {
        node* temp=head;
        while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
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
};


node* getMiddle(node* head){
    node* slow = head;
    node* fast = head;
    node* prev=NULL;
    if(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    return slow;
}

node* sortedMerge(node* left,node* right){
    list ans;
    node* i=left;
    node* j=right;
    while(i!=NULL && j!=NULL){
        if(i->data<=j->data){
            ans.push_back(i->data);
            i=i->next;
        }
        else {
            ans.push_back(j->data);
            j=j->next;
        }
    }
    while(i!=NULL)
    {
        ans.push_back(i->data);
        i=i->next;
    }
    while(j!=NULL){
        ans.push_back(j->data);
        j=j->next;
    }
    return ans.head;
}

node* mergesort(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid = getMiddle(head);
    node* left=head;
    node* right=mid;
    left=mergesort(left);
    right=mergesort(right);
    node* result = sortedMerge(left,right);
    return result;
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
    ll.display(ll.head);
    cout<<"\n";
    ll.head=mergesort(ll.head);
    ll.display(ll.head);
}