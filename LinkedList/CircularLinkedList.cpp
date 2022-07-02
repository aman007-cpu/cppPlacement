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
    
    
    return 0;
}