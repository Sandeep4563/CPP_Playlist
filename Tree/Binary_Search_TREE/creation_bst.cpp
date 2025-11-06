#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }

};

//insert of binary Search tree
Node* insert(Node* root,int target){
    if(!root){
        Node* temp=new Node(target);
        return temp;
    }

    //left Subtree
    if(root->data > target){
        root->left=insert(root->left,target);
    }
    //right subtree
    else{
        root->right=insert(root->right,target);
    }
}

bool Search(Node* root,int target){
    if(!root) return 0;

    if(root->data == target) return 1;

    if(root->data>target){
        return Search(root->left,target);
    }
    else{
        return Search(root->right,target);
    }
}


void inorder(Node* root){
    if(!root) return;

    
    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

int main(){
  int arr[]={7,3,4,9,5,5,2,9};
  int n=8;
  Node* root=nullptr;
  for(int i=0;i<n;i++){
    root=insert(root,arr[i]);
  }

  inorder(root);
    cout << endl;
  bool ans=Search(root,11);
  cout << ans;
}