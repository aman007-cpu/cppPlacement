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

void athead(Node *&head, int val){
    Node *n = new Node(val);
    n->next = head;
    head = n;

}
bool search(Node *head, int key){
    Node *temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp = temp->next; 
    }
    return false;
}

void delfirst(Node* &head){
   
    Node*temp = head;
  head = temp->next;
  delete temp;
}
void deletion(Node *&head, int key){
    Node *temp  = head;
     if(head==Null){
        return;
    }
    if(temp->next==null){
        head = Null;
        delete temp;
    }
   while(temp->next->data!=key){
        temp = temp->next;
      }
      Node *todelete = temp->next;
     temp->next = temp->next->next;
     delete todelete;
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
   //athead(head,4);
  // display(head);
 // deletion(head,2);
   delfirst(head);
  display(head);
   return 0;
}