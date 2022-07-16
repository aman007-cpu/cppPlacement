#include<iostream>
using namespace std;
#define n 5
int ar[n];

int front =-1;
int rear = -1;

void enqueu(int val){
    if(front == (rear +1)%n){
        cout<<"overflow";
    }
    else{
        if(front==-1){
            front =0;
            rear = (rear+1)%n;
            ar[rear] = val;
        }

    }
}

void dequeu(){
    if(front==-1 && rear ==-1){
        cout<<"underflow";
    }
    if(front == rear){
        front = rear =-1;
    }
    else{
        front = (front +1)%n;
    }
}

void display(){
    if(front ==-1 &&  rear ==-1){
        cout<<"empty";
    }
   int i;
   if(front<=rear){
    for(i=front;i<=rear;i++){
        cout<<ar[i];
    }

   }
   else if(front>=rear){
     i = front;
     while(i<n){
        cout<<ar[i];
        i++;
     }
     i=0;
     while(i<=rear){
        cout<<ar[i];
        i++;
     }
   }

}

int main(){

}