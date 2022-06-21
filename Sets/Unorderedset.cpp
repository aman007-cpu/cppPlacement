#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}// set stores unique elements
int main(){
  unordered_set<string> s;

    s.insert("abc");  // O(1)
    s.insert("fds");
    s.insert("nicel");
    auto it = s.find("abcs"); //searching   // O(1)
    if(it !=s.end()){
        cout<<(*it);
    }
    s.erase("abc");
    print(s);
    return 0;

}