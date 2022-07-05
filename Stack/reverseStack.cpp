#include<iostream>
#include<stack>
using namespace std;
  

  void insertAtBottom(stack<int> &st, int el){
    if(st.empty()){
        st.push(el);
    }
    int tope = st.top();
    st.pop();
    insertAtBottom(st,el);
    st.push(tope);
  }
  void reverset(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele = st.top();
    st.pop();
    reverset(st);

    insertAtBottom(st,ele);

  }


int main(){
   stack<int> st;
   st.push(1);
    st.push(2);
     st.push(3);
      st.push(4);

      reverset(st);
     while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
     }cout<<endl;

    return 0;
}