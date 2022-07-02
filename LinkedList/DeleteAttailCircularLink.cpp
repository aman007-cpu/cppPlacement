#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=nullptr;
    }
};
void insertAthead(node* &head, int val){
    node * n = new node(val);
    if(head==nullptr){
        n->next = n;
        head = n;
        return;
    }
     node * temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;


}
void insertattail(node *&head,int val){
    if(head == nullptr){
        insertAthead(head,val);
        return;
    }
    node * n = new node(val);
    node * temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;

}
void deleteAthead(node* &head){
    node* temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    node* todelte = head;
    temp->next = head->next;
    head = head->next;
    delete todelte;
}
void deletion(node* &head,int pos){
    if(pos==1){
        deleteAthead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(count!=pos-1){
        temp =temp->next;
        count++;

    }
    node* todelete = temp->next;
    temp->next  = temp->next->next;
    delete todelete;
}
void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    node* head = nullptr;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    insertAthead(head,5);
    display(head);
    deletion(head,5);
     display(head);
    
    return 0;
}