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
void makecycle(Node *&head, int pos){
    Node* temp = head;
    Node* startNode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startNode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startNode;
}
bool detectCycle(Node *&head){
    Node *slow = head;
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
      slow = slow->next;
      fast = fast->next->next;
      if(fast == slow){
        return true;
      }
    }
    return false;
}
void removecycle(Node*&head){
 Node *slow = head;
    Node *fast = head;
  do{
    slow = slow->next;
    fast = fast->next->next;
  }while(slow!=fast);

  fast=head;
  while(fast->next!=slow->next){
    fast = fast->next;
    slow = slow->next;
  }
  slow->next = NULL;

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
    insert(head,5);
    insert(head,6);

    makecycle(head,3);

    cout<<detectCycle(head)<<endl;
    removecycle(head);
    display(head);
   
   return 0;
}