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

int search(int inorder[], int start, int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }

    }
    return -1;
}

void display(node* root){
    if(root==nullptr){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

node* buildtree(int preorde[],int inorder[], int start,int end){
    static int idx = 0;
    if(start>end){
        return nullptr;
    }
    int curr = preorde[idx];
    idx++;
    node* xml = new node(curr);
    if(start==end){
        return xml;
    }
    int pos = search(inorder,start,end,curr);
    xml->left = buildtree(preorde,inorder,start,pos-1);
    xml->right = buildtree(preorde,inorder,pos+1,end);
    return xml;
}

int main()
 {
     int preorder[] = {1,2,3,4,5};
     int inorder[] = {4,2,1,5,3};
    node* root= buildtree(preorder,inorder,0,4); 
     display(root);
    return 0;
}