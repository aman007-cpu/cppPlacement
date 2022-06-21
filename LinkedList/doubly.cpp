#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data= val;
        next=nullptr;
        prev=nullptr;
    }
};
void insertAthead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=nullptr){
     head->prev = n;
    }
   
    head = n;
}
void insertAttail(node* &head, int val){
    if(head == nullptr){
        insertAthead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteathead(node* &head){
    node* temp = head;
    head = head->next;
    head->prev = nullptr;
    delete temp;
}
void deletion(node* head, int pos){
    if(pos==1){
        deleteathead(head);
    }
    node* temp = head;
    int count = 1;
    while(temp!=nullptr && count!=pos){
      temp = temp->next;
      count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=nullptr){
    temp->next->prev = temp->prev;
    }
    delete temp;
}
void display(node* head){
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head = nullptr;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
     display(head);
     insertAthead(head,5);
     display(head);

    return 0;
}