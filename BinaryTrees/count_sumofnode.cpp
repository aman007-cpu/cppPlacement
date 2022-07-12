#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int CountNode(node* root){
    if(root==nullptr){
        return 0;
    }
    return CountNode(root->left)+ CountNode(root->right) + 1;
}
int SumofNodes(node* root){
    if(root == nullptr){
        return 0;
    }
    return SumofNodes(root->left) + SumofNodes(root->right) + root->data;
}

int main(){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);


  //Level Order Traversal
//   printLevelorder(root);
 

 cout<<CountNode(root);
 cout<<"\n"<<SumofNodes(root);
   
}