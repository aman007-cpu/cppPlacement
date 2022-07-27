#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node* left;
     node* right;

     node(int val){
        data = val;
        left = nullptr;
        right = nullptr;

     }
};

node* insertIntoBst(node* root,int val){
    if(root == nullptr){
        root = new node(val);
        return root;
    }
   if(val>root->data){
    root->right = insertIntoBst(root->right,val);
   }
   else{
    root->left = insertIntoBst(root->left,val);
   }
   return root;
}
void takeinput(node* root){
    int data;
    cin>>data;
    while(data!=-1){
      root = insertIntoBst(root,data);
        cin>>data;
    }
}
// void levelorderTraversal(node* root){
//     queue<node*> q;
//     q.push(root);
//     q.push(nullptr);
//     while(!q.empty()){
//         node* temp = q.front();
       
//         q.pop();
//           if(temp == nullptr){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(nullptr);
//             }
//           }
//          else{
//              cout<<temp->data<<" ";
//             if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//          } 

//     }
// }

void preorder(node* root){
    if(root == nullptr)return;
    cout<<endl;
    cout<<"Preorder Traversal -> "<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}
void postorder(node* root){
    if(root == nullptr)return;
   
    postorder(root->left);
    postorder(root->right);
    cout<<endl;
     cout<<"Postorder Traversal -> "<<root->data<<" ";
}
void inorder(node* root){
    if(root == nullptr)return;
    
    inorder(root->left);
    cout<<endl;
    cout<<"Inorder Traversal -> "<<root->data<<" ";
    inorder(root->right);
}


int main(){
    node* root = nullptr;
    cout<<"Enter data to create bst"<<endl;
    takeinput(root);
    cout<<"printing BST"<<endl;
    // levelorderTraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
}