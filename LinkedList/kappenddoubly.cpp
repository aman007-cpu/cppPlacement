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


int len(Node*head){
    int ctr=0;
    Node* temp = head;
    while(temp!=nullptr){
        ctr++;
        temp = temp->next;
    }
    return ctr;
}
Node* kappen(Node *&head, int k){
    int l = len(head);
    Node*  newhead;
    Node* newtail;
    Node* tail = head;
    int count =1;
    k = k%l;
    while(tail->next!=nullptr){
        if(count==l-k){
            newtail = tail;
        }
        if(count == l-k+1){
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }

    newtail->next = nullptr;
    tail->next  = head;
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
  int ar[]={1,2,3,4,5,6};
  for(int i=0;i<6;i++){
    insert(head,ar[i]);
  }
  display(head);
  Node* newhead = kappen(head,3);
  display(newhead);
   return 0;
}