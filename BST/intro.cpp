#include<bits/stdc++.h>
using namespace std;

class node{
    public:
         int data;
         node* left;
         node* right;
         node(int val){
            data = val;
            this->left = nullptr;
            this->right = nullptr;
         }
};
void inorder(node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
node* insertdataBst(node* root, int data){
    if(root == nullptr){
          root = new node(data);
        return root;
    }

    if(data>root->data){
        //right part me jana hai
        root->right = insertdataBst(root->right,data);
    }
    else{
        root->left  = insertdataBst(root->left,data);
    }
}
void inputData(node* root){
    int data;
    cin>>data;
    while(data!=-1){
       root =  insertdataBst(root,data);
        cin>>data;
    }
}

int main(){
  node* root = nullptr;
  cout<<"Enter the data in BST:";
  inputData(root);
cout<<endl;
  inorder(root);

}