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

int sumAtK(node* root, int k){
    if(root == nullptr){
        return -1;
    }

    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    int level=0;
    int sum=0;
    while(!q.empty()){
      node* temp = q.front();
      q.pop();
      if(temp!=nullptr){
        if(level==k){
            sum+= temp->data;
        }
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }


      }
      else if(!q.empty()){
        q.push(nullptr);
        level++;
      }
    }

    return sum;
}

// void printLevelorder(node* root){
//   if(root == nullptr){
//     return;
//   }
//   queue<node*> q;
//   q.push(root);
//   q.push(nullptr);
//   while(!q.empty()){
//      node * temp = q.front();
//      q.pop();
//      if(temp!=nullptr){
//            cout<<temp->data<<" ";
//            if(temp->left){
//             q.push(temp->left);
//            }
//            if(temp->right);
//            {
//             q.push(temp->right);
//            }

        
//      }
//      else if(!q.empty()){
//         q.push(nullptr);
//      }
//   }                 
// }
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
 
 cout<<sumAtK(root,2);
   
}