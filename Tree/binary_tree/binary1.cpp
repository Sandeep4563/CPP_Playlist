//representation of binary tree 
//iterative approach
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=right=nullptr;
    }
};


//level order using queue datastructure
node* binaryTree(){
    int x,first,second;
    queue<node*> q;
    cin>>x ;//value for root
    node* root=new node(x);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cin >> first;//value for left child

        if(first != -1){
            temp->left=new node(first);//left child
            q.push(temp->left);
        }

        cin >> second;
        if(first != -1){
            temp->right=new node(second);
            q.push(temp->right);
        }
    }
    return root;
}

//tree traversal

void preorder(node* root){
    if(root==nullptr){
        return;
    }
     
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main(){
    node* root=binaryTree();
     
    preorder(root);
    
}