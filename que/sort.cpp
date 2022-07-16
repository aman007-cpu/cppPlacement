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

int heightb(node* root){
    if(root == nullptr){
        return -1;
    }

    int left = heightb(root->left);
    int right = heightb(root->right);
    return 1 + max(left,right);
}

int main(){

  struct node * root = new node(1);
 root->left = new node(2);
root->right = new node(3);
root->left->left = new node(4);
root->left->right = new node(5);
  cout<<heightb(root);
}