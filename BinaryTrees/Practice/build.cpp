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
node* buildTree(node* root)
{
    cout<<"enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
     {return nullptr;
     }
    cout<<"enter the data in left : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter the data in right : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
node* buildfromlevel(node* &root){
    queue<node*> q;
    q.push(root);
    int data;
    cout<<"enter data : "<<endl;
    cin>>data;
    while(!q.empty()){
        node* temp = q.front();
        cout<<"enter left node for"<<temp->data<<endl;
        int lftdata;
        cin>>lftdata;
        if(lftdata == -1){
            temp->left = new node(lftdata);
            q.push(temp->left);
        } 
        cout<<"enter right node for"<<temp->data<<endl;
        int rhtdata;
        cin>>rhtdata;
        if(lftdata == -1){
            temp->right = new node(rhtdata);
            q.push(temp->right);
        } 
    }
}

void levelorderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        node* temp = q.front();
       
        q.pop();
          if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
          }
         else{
             cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
         } 
       


    }
}
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
root = buildTree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
levelorderTraversal(root);
inorder(root);
preorder(root);
postorder(root);
}