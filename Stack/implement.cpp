#include<iostream>

using namespace std;
int n=100;
class stack{
 int *ar;
 int top;

  public:
   stack(){
    ar = new int[n];
     top =-1;
   }
   void push(int x){
    if(top == n-1){
        cout<<"Overflow";
        return;
    }

    top++;
    ar[top] = x;
   }

   void pop(){
    if(top==-1){
        cout<<"underflow";
        return;
    }

    top--;
   }

   int Top(){
      if(top==-1){
        cout<<"underflow";
        return -1;
    }
    return ar[top];
   }

   bool empty(){
    return top == -1;
   }


};
int main(){

    stack s;
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(100);
    cout<<s.Top();
    return 0;
  
}