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
Node* merge(Node* &head1, Node* &head2){
   Node* p1 = head1;
   Node* p2 = head2;
   Node* dummynode = new Node(-1);
   Node* p3 = dummynode;
   while(p1!=nullptr && p2!=nullptr){
    if(p1->data<p2->data){
        p3->next = p1;
        p1 = p1->next;
    }else{
        p3->next = p2;
        p2=p2->next;
    }
    p3=p3->next;
   }
   while(p1!=nullptr){
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
   }
    while(p2!=nullptr){
    p3->next = p2;
    p2 = p2->next;
    p3 = p3->next;
   }
   return dummynode->next;
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
   Node * head1 = nullptr;
   Node* head2 = nullptr;

   insert(head1,1);
   insert(head2,2);
   insert(head1,3);
    insert(head2,4);
    insert(head1,5);
    insert(head2,6);
    insert(head1,7);
    insert(head2,8);

  display(head1);
    display(head2);
    Node * newhead = merge(head1,head2);
    display(newhead);
   return 0;
}