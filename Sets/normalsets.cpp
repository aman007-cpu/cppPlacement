#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value : s){
        cout<<value<<endl;
    }
}// set stores unique elements
int main(){
    set<string> s;
    s.insert("abc");  //log(n)
    s.insert("fds");
    s.insert("nicel");
    auto it = s.find("abcs"); //searching   //log(n)
    if(it !=s.end()){
        cout<<(*it);
    }
    print(s);
    return 0;

}