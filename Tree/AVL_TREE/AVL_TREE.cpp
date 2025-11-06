#include<bits/stdc++.h>
using namespace std;

//Node structure for the given tree
class Node{
    public:
    int data,height;
    Node *left,*right;

    Node(int val){
        data=val;
        height=1;
        left=right=nullptr;
    }
};



//get height of the tree function

int getHeight(Node* root){
    if(!root) return 0;

    return root->height;
}

//function to getBalance

int getBalance(Node* root){
    return getHeight(root->left)-getHeight(root->right);
}


//Right rotation
Node* rightRotation(Node* root){
    Node* child=root->left;
    Node* childRight=child->right;
    
    child->right=root;
    root->left=childRight;

    root->height=1+max(getHeight(root->left),getHeight(root->right));
    child->height=1+max(getHeight(child->left),getHeight(child->right));

    return child;
}

//left Rotation
Node* leftRotation(Node* root){
    Node* child=root->right;
    Node* childLeft=child->left;
    
    child->left=root;
    root->right=childLeft;

    root->height=1+max(getHeight(root->left),getHeight(root->right));
    child->height=1+max(getHeight(child->left),getHeight(child->right));

    return child;
}



//insertion of the given element in the AVL tree
Node* insertion(Node* root,int key){
    //Root not exist
    if(!root) 
    return new Node(key);

    //Root Exist

    //key<root
    if(key<root->data) 
    root->left=insertion(root->left,key);
    

    //key>root
    else if(key>root->data) 
    root->right=insertion(root->right,key);

    //if duplicate element
    else{
        return root;
    }

    //update the height of the tree
    root->height=1+max(getHeight(root->left),getHeight(root->right));

    //check if the tree is balancing or not
    int balance=getBalance(root);

    // Left Left balance
    if(balance>1 && root->left->data > key){
       return rightRotation(root);
    }

    //Right Right balance
    if(balance<-1 && root->right->data < key ){
        return leftRotation(root);
    }

    //left Right balance
    if(balance >1 && root->left->data < key){
           root->left=leftRotation(root->left);
           return rightRotation(root);
    }

    //right left balance
    if(balance <-1 && root->right->data > key){
          root->right= rightRotation(root->right);
           return  leftRotation(root);
    }

    //tree is unbalance

    else{
        return root;
    }

}


//deletion of Node in Avl

Node* deletionNode(Node* root,int key){
    //root not exist
    if(!root) return nullptr;

    //left traverse
    if(key<root->data){
        root->left=deletionNode(root->left,key);
    }

    //right traverse
    else if(key>root->data){
        root->right=deletionNode(root->right,key);

    }

    else{
        //leaf node
        if(!root->left && !root->right){
            delete root;
            return nullptr;
        }

        //single child exist
        //left child exist but not right child
        if(root->left && !root->right){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child exist
        else if(root->right && !root->left){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        //both child exist
        else{
            //find the minimum of the right side
            Node* current=root->right;
            while(current->left){
                current=current->left;
            }
           root->data=current->data;
          root->right=deletionNode(root->right,current->data);
        }
    }

    //updating the height of the tree
    root->height=1+max(getHeight(root->left),getHeight(root->right));

    //Balancing the tree

    int balance=getBalance(root);

    //left side
    if(balance>1){
        //LL
        if(getBalance(root->left)>=0){
            return rightRotation(root);
        }
        //LR
        else{
            root->left=leftRotation(root->left);
            return rightRotation(root);
        }
    }
    //right side
    else if(balance<-1){
       //RR
        if(getBalance(root->right)<=0){
        return leftRotation(root);
        }
        //RL
        else{
             root->right=rightRotation(root->right);
            return leftRotation(root);
        }
        

    }
    else return root;

}

void inorder(Node* root){
    if(!root) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node *root=nullptr;
    root=insertion(root,-6);
    root=insertion(root,-1);
    root=insertion(root,-8);
    root=insertion(root,-7);
    root=insertion(root,8);
    root=insertion(root,0);
    root=insertion(root,4);

    inorder(root);
    cout << endl;
    root=deletionNode(root,-1);

    inorder(root);
   
}




