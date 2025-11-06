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
    cout << "Enter the right" <<x<<":";
    temp->right=binaryTree();
    return temp;

}


int main()
{
    cout<<"enter the root:";
    node* root=binaryTree();
 
}