#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    };

    class linkedlist{
        public:
        Node* head=nullptr;
        void push(int x){
        Node* newnode=new Node(x);
        if(head == nullptr) head=newnode;
     else{
        newnode->next=head;
        head=newnode;
     }

        }


        void del(int k){
            if(head == nullptr){
                return;
            }

            if(k==1){
                Node* temp=head;
                head=head->next;
                temp->next=nullptr;
                delete(temp);
                return;
            }

            Node* temp=head;
            Node* prev=nullptr;
            int i=1;
            while(temp!=nullptr){
                if(i==k) break;
                prev=temp;
                temp=temp->next;
                i++;
            }

            if(!temp) return;

            prev->next=temp->next;
            temp->next=nullptr;
            delete(temp);

           

        }
        



        void reverse(){
            Node* prev=nullptr;
            Node*current=head;
            Node* next=nullptr;

            while(current != NULL){
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
                head=prev;
        }

        void display(){
            Node* temp=head;
            cout <<"This is head address:" << head<< endl;
            int i=0;
            while(temp !=nullptr){
                cout << temp->data <<" ";
                 i= i+1;
                  cout << "temp addr "<< temp << endl;
                temp=temp->next;
               
                
            }
           
            cout << "size:" <<i;
        }
    };



    int main(){
    linkedlist ll;
    ll.push(10);
    ll.push(20);
    ll.push(11);
    ll.push(14);

    ll.display();

    ll.del(4);

    // ll.reverse();
     cout<<endl;
    ll.display();

    }
