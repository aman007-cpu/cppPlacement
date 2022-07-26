#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = nullptr;
        prev = nullptr;

    }
};

void print(node* root){
    node* temp = root;
    if(root == nullptr)return;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int getlength(node* head){
     node* temp = head;
    if(head == nullptr)return 0;
    int ctr=0;
    while(temp!=nullptr){
        ctr++;
      
        temp = temp->next;
    }
    cout<<endl;
    return ctr;
}
void insertAtHead(node* &head,int val){
    if(head==nullptr){
        node* temp = new node(val);
        head = temp;
        return;
    }
    node* temp = new node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
    
}

void insertAtTail(node* & tail,int val){
   node* temp = new node(val);
   temp->prev = tail;
   tail->next = temp;
   tail = temp;
}

void insertAtposition(node* tail,node* head,int pos,int val){
     if(pos==1){
        insertAtHead(head,val);
        return;
     }
     node*temp = head;
     int cnt=1;
     while(cnt<pos-1){
        temp = temp->next;
        cnt++;
     }
     //inserting at last pos
     if(temp->next==nullptr){
        insertAtTail(tail,val);
        return;
     }

     //creating a node for val

     node* innode = new node(val);
     
     innode->next = temp->next;
     temp->next->prev = innode;
     temp->next = innode;
     innode->prev = temp;
}

void deletionList(int pos,node*head){
      if(pos == 1){
        node* temp = head;
        temp->next->prev = nullptr;
        head = temp->next;
        temp->next = nullptr;
        delete temp; 
      }
      node* curr = head;
      node* prev = nullptr;
       int cnt=1;
       while(cnt<pos){
        prev = curr;
        curr = curr->next;
         cnt++;
       }

       curr->prev  = nullptr;
       prev->next = curr->next;
       curr->next = nullptr;
       delete curr;
       
}


int main(){
node* node1 = new node(10);
node* head = node1;
node* tail = node1;
print(head);

insertAtHead(head,11);
print(head);
insertAtTail(tail,23);
print(head);
insertAtposition(tail,head,2,31);
print(head);
insertAtposition(tail,head,5,13);
print(head);
insertAtposition(tail,head,0,13);
print(head);
deletionList(1,head);
print(head);
}