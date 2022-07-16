#include<bits/stdc++.h>
using namespace std;
int ar[100],top=-1;
int n=10;
void pushin(int x){
  if(top>=n-1){
    cout<<"overflow";
  }
  top++;
  ar[top] = x;
}

void popin(){
    if(top<=-1){
        cout<<"underflow";
    }
    top--;
}

void display(){
    if(top>=0){
        cout<<"elements are : "<<endl;
        for(int i=top;i>=0;i--){
            cout<<ar[i];
        }
    }
}

int main(){ 

    int x=0;
    for(int i=0;i<n;i++){
      cout<<"Enter the number to a stack :";
      cin>>x;
      pushin(x);
    }
    cout<<endl;
    cout<<"Remove from stack";
    popin();

    display();
}