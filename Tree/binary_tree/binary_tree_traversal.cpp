//How to create a binary tree
//recursive approach for creating binary tree
//preoreder traversal
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};



   node* binaryTree(){

    int x;
    
    cin >> x;

    if(x==-1){
        return nullptr;
    }
    node* temp=new node(x);
    cout << "Enter the left child of " <<x<<":";
    temp->left=binaryTree();
     cout << "Enter the right child of " <<x<<":";
    temp->right=binaryTree();
    return temp;

}

 

void inorder(node* root){
    if(root==nullptr){
        return;
    }
     
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void postorder(node* root){
    if(root==nullptr){
        return;
    }
     
    
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}






int main()
{
    cout<<"enter the root:";
    node* root=binaryTree();

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
 
}