#include<iostream>
using namespace std;
int front =-1,rear=-1;
int ar[20], n=5;

void push(int val){
    if(rear==n-1){
        cout<<"overflow";
    }
    if(front==-1){
        front=0;
        rear++;
        ar[rear] = val;
    }

}
void pop(){
    if(front == -1 || front>rear){
        cout<<"underflow";
    }
   front++;

}

int main(){
    int x= 0;
 for(int i=0;i<n;i++){
    cout<<"enter no :";
    cin>>x;
    push(x);
 }

 cout<<"deleted from queue"<<endl;
 pop();


}