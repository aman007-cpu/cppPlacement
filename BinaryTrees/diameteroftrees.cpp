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
 int CalculateH(node * root){
    if(root==nullptr){
        return 0;
    }
    return max(CalculateH(root->left),CalculateH(root->right)) + 1;
 }
int CalculateDia(node* root){
    if(root == nullptr){
        return 0;
    }
    int lH = CalculateH(root->left);
    int rH = CalculateH(root->right);
    int curDia = lH + rH +1;
    int lDai = CalculateDia(root->left);
    int rDai = CalculateDia(root->right);
    return max(curDia, max(lDai,rDai));

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

cout<<CalculateDia(root);
 
}