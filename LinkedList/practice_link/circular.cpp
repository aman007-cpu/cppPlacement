#include<bits/stdc++.h>
using namespace std;

class node{
    public:
     int data;
     node* next;
     node(int val){
        data = val;
        next = nullptr;
     }
};

void insertNode(node* tail,int element,int val){
  if(tail == nullptr){
    node* newnode = new node(val);
      tail = newnode;
      newnode->next = newnode;
  }
  else{
    //non empty list

    node* curr = tail;
    while(curr->data!=element){
        curr = curr->next;
    }
    //element found
    node* temp = new node(val);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void print(node* tail){
    node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!=temp);
    
}
int main(){
 node* tail = nullptr;
 insertNode(tail,0,2);
 print(tail);
}