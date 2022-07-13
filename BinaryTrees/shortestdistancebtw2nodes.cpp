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

node* LCA(node* root, int n1, int n2){
    if(root== nullptr){
        return nullptr;
    }

    if(root->data==n1 || root->data == n2){
        return root;
    }

    node* left = LCA(root->left,n1,n2);
    node* right = LCA(root->right,n1,n2);
    if(left!=nullptr && right!=nullptr){
        return root;
    }

    if(left==nullptr){
        return nullptr;
    }

    if(left!=nullptr){
        return LCA(root->left,n1,n2);
    }

    return LCA(root->right,n1,n2);

}
int findDista(node*root,int k,int dist){
    if(root == nullptr){
        return -1;
    }
    if(root->data == k){
        return dist;
    }

    int left = findDista(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return findDista(root->right,k,dist+1);
}

int distance(node* root, int n1,int n2){
    node* lca = LCA(root,n1,n2);
    int d1  = findDista(lca,n1,0);
    int d2 = findDista(lca,n2,0);
    return d1+d2;
}
int main(){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
 

  cout<<distance(root,4,5);
 
}