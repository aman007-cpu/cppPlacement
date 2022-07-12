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

int height(node* root){
    if(root==nullptr){
        return 0;
    }
    int lh =  height(root->left);
    int rh =  height(root->right);
    return max(lh , rh)+1;
}
bool isBalanced(node* root){
    if(root==nullptr){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1){
        return true;

    }
    else{
        return false;
    }
}

int main(){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
 if(isBalanced(root)){
    cout<<" Balance Hai Ji Tree";
 }
 else{
    cout<<" Nahi hai ji";
 }
}