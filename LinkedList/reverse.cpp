#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

void insert(Node* &head, int val){
    Node* n = new Node(val);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = n;


}
Node * reverse(Node *&head){
    Node *prevptr =NULL;
    Node *curptr = head;
    Node *nextptr;

    while(curptr!= NULL){
        nextptr = curptr->next;
        curptr->next = prevptr;
        prevptr = curptr;
        curptr = nextptr;
    }
    return prevptr;
}

Node *reversrecursive(Node* &head){

    if(head==NULL || head->next==NULL){
      return head;
    }
    Node *newhead = reversrecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void display(Node *head){
 Node *temp = head;
 while (temp!= NULL)
 {
    cout<<temp->data<<"->";
    temp = temp->next;
 }
 cout<<endl;
}
int main(){
   Node * head = NULL;
   insert(head,1);
   insert(head,2);
   insert(head,3);
    insert(head,4);
   display(head);
   Node *newhead = reverse(head);
   display(newhead);
 
   return 0;
}