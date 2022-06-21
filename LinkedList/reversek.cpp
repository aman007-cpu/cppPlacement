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

Node *reversek(Node *&head, int k){
    Node* prevptr = NULL;
    Node* curptr = head;
    Node* nextptr;
    int count=0;
    while(curptr!==Null && count<k){
        nextptr = curptr->next;
        curptr->next  = prevptr;
        prevptr = curptr;
         curptr = nextptr;
         k++;
            }
        if(nextptr!=NULL){
           head->next= reversek(nextptr,k);
           }

           return prevptr;
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
   
   return 0;
}