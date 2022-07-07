#include<bits/stdc++.h>
using namespace std;
class node{
 public:
  int data;
  node *next;
  node(int val){
    data = val;
    next = nullptr;
  }
};

class Queue{
    node * front;
    node * back;
    public:
     queue(){
        front = nullptr;
        back = nullptr;
     }

     void push(int x){
        node *n = new node(x);
        if(front==nullptr){
            back = n;
            front = n;
            return;
        }
        back->next  = n;
        back = n;
     }

     void pop(){
        if(front==nullptr){
            cout<<"UNDERFLOW";
            return;
        }

        node *todelete = front;
        front = front->next;

        delete todelete;
     }

     int peek(){
         if(front==nullptr){
            cout<<"NO elements";
            return -1;
        }
        return front->data;
     }

     bool empty(){
        if(front==nullptr){
           return true;
         
        }
        return false;
     }
};



int main(){
   Queue q;
   q.push(1);
   q.push(2);
    q.push(3);
     q.push(4);
      q.push(5);
   cout<<q.peek()<<endl;
    return 0;
}