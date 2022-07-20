#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left= nullptr;
        right = nullptr;
    }
};
node* insertBst(node* root, int val){
    if(root == nullptr){
        return new node(val);
    }
    if(val<root->data){
        root->left = insertBst(root->left,val);
    }
    else{
        root->right = insertBst(root->right,val);
    }

    return root;
}


node* searchinBst(node* root,int key){
    if(root == nullptr){
        return nullptr;
    }
    if(root->data == key){
        return root;
    }

    if(root->data>key){
        return searchinBst(root->left,key);
    }
    else{
        return searchinBst(root->right,key);
    }
}
void inorder(node* root){
    if(root == nullptr){
        return;
    }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);

} 

int main(){
  node * root= nullptr;
  root = insertBst(root,5);
  insertBst(root,1);
    insertBst(root,3);
      insertBst(root,2);
        insertBst(root,4);
       insertBst(root,6);
         insertBst(root,7);
     //print inorder 

     if(searchinBst(root,4)==nullptr) cout<<"Key doesnt exit";
     else{
        cout<<"key exist"<<endl;
     }      
  inorder(root);     
}