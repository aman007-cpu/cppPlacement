#include<iostream>
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

void postorder(struct node*root){
    if(root==nullptr){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int search(int inorder,int start,int end,int val){
    for(int i=start,i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
node * buildtree(int post[], int inorder[],in start,int end){
    static int idx = 4;
    if(start>end){
        return nullptr;
    }
    int val = post[x];
    idx--;
    node cur = new node(val);
    if(start==end){
        return cur;
    }
   int pos = search(inorder,star,end,val);
   cur->right = buildtree(pos,inorder,pos+1,end);
   cur->left = buildtree(pos,inorder,start,pos-1);
   return curr;


}

void inorderprint(node * root){
    if(root==nullptr){
        return ;
    }
    inorderprint(root->left);
    cout<<root->data;
    inorderprint(root->right);
}

int main(){
  struct node* root = new node(1);
  root->left  = new node(2);
  
  root->right = new node(3);

  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
   postorder(root);
    return 0;
}