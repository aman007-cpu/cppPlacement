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
bool getpath(node* root,int key,vector<int> &path){
    if(root==nullptr){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
} 

int LCA(node* root,int n1,int n2){
    vector<int> path1,path2;
    if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc =0;pc<path1.size() && pc<path2.size();pc++){
        if(path1[pc] !=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}

node* Lca2(node* root,int n1, int n2){
    if(root == nullptr){
        return nullptr;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node *leftlca = Lca2(root->left,n2,n1);
    node *rigthlca = Lca2(root->right,n2,n1);
    if(leftlca && rigthlca){
        return root;
    }
    if(leftlca!=nullptr){
        return leftlca;
    }
    return rigthlca;
}

int main(){
 node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  root->left->right = new node(5);
  root->right->right = new node(6);
  root->right->left->left = new node(7);

  int n1=7;
  int n2=6;
  node* lca = Lca2(root,n1,n2);
  if(lca== nullptr){
    cout<<"doesnt exist";
  }
  else{
    cout<<"exist :"<<lca->data<<endl;
  }

}