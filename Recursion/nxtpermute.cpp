#include<bits/stdc++.h>
using namespace std;

void nxt_per(string s, int ind){
    if(ind>=s.size()){
        cout<<s<<" ";
        cout<<endl;
        return;
    }

    for(int i=ind;i<s.size();i++){
        swap(s[ind],s[i]);
        nxt_per(s,ind+1);

        //backtracking
          swap(s[ind],s[i]);
    }
    

}

int main(){
  string str="abc";
  nxt_per(str,0);

}