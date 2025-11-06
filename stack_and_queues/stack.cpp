//this is the implementatiom of stack using linked list
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

class stackImp{
    private:
    node* top=nullptr;
    int size=0;

    public:
    void push(int x){
        node* newnode=new node(x);
        if(top==nullptr){
            top=newnode;
            size++;
            return;
        }
        newnode->next=top;
        top=newnode;
        size++;
    }

    void pop(){
        if(size==0){
            cout << "no element to pop"<<endl;
            return;
        }
        node* temp=top;
        top=top->next;
        delete temp;
        size--;
    }

    void peek(){
        if(size==0){
            cout << "stack is empty"<<endl;
            return;
        }
        cout << top->data<<endl;
    }
};

int main(){
    stackImp st;
    st.push(10);
    st.push(12);
    st.push(13);
    st.pop();
    st.pop();
    
    st.peek();
}