#include<bits/stdc++.h>
using namespace std;
void print( multiset<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}// set stores unique elements
int main(){
   multiset<string> s;

    s.insert("abc");  //  O(logn)
    s.insert("fds");
    s.insert("nicel");
    s.insert("abc"); // second time insertion of abc (Duplicates allowed)
    auto it = s.find("abc"); //searching   // O(1)
    if(it !=s.end()){
        cout<<(*it);
    }
    s.erase("abc");
    print(s);
    return 0;

}