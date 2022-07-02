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

void display(Node *head){
 Node *temp = head;
 while (temp!= NULL)
 {
    cout<<temp->data<<"->";
    temp = temp->next;
 }
 cout<<endl;
}

int length(Node* head){
    int l=0;
    Node* temp = head;
    while(temp!=nullptr){
        temp=temp->next;
        l++;
    }
    return l;
}
void intersect(Node* &head1, Node* &head2, int pos){
    Node* temp1  = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;

    }

    Node* temp2 = head2;
    while(temp2->next!=nullptr){
        temp2 = temp2->next;

    }
    temp2->next  =temp1;
}

int intersection(Node* head1, Node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d=0;
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        d= l2-l1;
        ptr1 = head2;
        ptr2  = head1;
    }

    while(d){
        ptr1 = ptr1->next;
        if(ptr1==nullptr){
            return -1;
        }     
    }
    while(ptr1!=nullptr&& ptr2!=nullptr)
        {
            if(ptr1->next==ptr2->next){
                return ptr1->data;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return -1;
}
int main(){
   Node* head1 = nullptr;
   Node* head2 = nullptr;
   insert(head1,1);
   insert(head1,2);  //aman007-cpu
   insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head2,7);
    insert(head2,8);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
   
   return 0;
}