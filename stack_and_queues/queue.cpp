//this is the implementation of queue using linked list;

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

    class QueueImp{
        public:
        node* front=nullptr;
        node* end=nullptr;
        int size=0;

        void push(int x){
            node* newnode=new node(x);
            if(front == nullptr){
                front=newnode;
                end=newnode;
                size=size+1;
                return;
            }
            end->next=newnode;
            end=newnode;
            size=size+1;
        }

        void popEle(){
            if(size==0){
                cout << "no element to pop";
                return;
            }
            cout << front->data<<endl;
            node* temp=front;
            front=front->next;
            size=size-1;
            delete temp;
        }

        void peek(){
            if(front==nullptr){
                cout<<"queue is empty";
            }
            else{
                cout<< front->data <<  endl;
            }
        }

        void capacity(){
            cout << "total element:" << size<< endl;
        }
    };

        
int main(){

    QueueImp q;
    
    for(int i=0;i<100;i++){
        q.push(i);
    }
  q.capacity();
  q.peek();
    
}