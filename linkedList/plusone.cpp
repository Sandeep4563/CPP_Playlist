#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};



node* head=NULL;


node* push(int val){
 node* newNode=new node(val);
    if(head == NULL){
        head=newNode;
        return head;
    }
    
    newNode->next=head;
    head=newNode;
    return head;
}

node* reverse(){
    node* temp=head;
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
       temp=curr->next;
       curr->next=prev;
       prev=curr;
       curr=temp;
    }
    head=prev;
    return head;
}

node* plusOne(){
   int carry=1;
   node* temp=head;
 }

void display(){
    node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main(){
   push(4);
   push(2);
   push(5);
   
   //plusOne();
display();
cout << endl;
   reverse();
  display();



}