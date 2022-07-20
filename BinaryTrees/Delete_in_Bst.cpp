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
//inorder succ
node* inordersucc(node* root){
    node* curr = root;
    while(curr && curr->left != nullptr){
         curr = curr->left;
    }

    return curr;
}

//deletion in Bst
node*  deleteInBst(node* root,int key){
    if(key<root->data){
        root->left  = deleteInBst(root->left,key);
    }
  else if(key>root->data){
        root->right = deleteInBst(root->right,key);
    }
    else{
        if(root->left==nullptr){
            node* temp = root->right;
            free(root);
        }
        else if(root->right==nullptr){
            node* temp = root->left;
            free(root);
        }

        //case 3"
        node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteInBst(root->right,temp->data);
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

    //  if(searchinBst(root,4)==nullptr) cout<<"Key doesnt exit";
    //  else{
    //     cout<<"key exist"<<endl;
    //  }  
      inorder(root);
      cout<<endl;  
     root = deleteInBst(root,5);    
      inorder(root);     
}