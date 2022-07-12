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

 void sumReplace(node* root){
    if(root==nullptr){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=nullptr){
        root->data += root->left->data;
    }
    if(root->right!=nullptr){
        root->data +=root->right->data; 
    }
 }

 void preorder(node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
 }

int main(){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);

 preorder(root);
 cout<<endl;
 sumReplace(root);
 preorder(root);

 
}