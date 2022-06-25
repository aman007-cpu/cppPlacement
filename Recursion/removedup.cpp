#include<iostream>
using namespace std;
string removedup(string s){

if(s.size()==0){
    return "";
}
 char ch = s[0];
  string str = removedup(s.substr(1));
  if(ch==str[0]){
    return str;
  }
  else{
    return ch + str;
  }

}
int main(){
   
   cout<<removedup("aaaaabbbbbcccdddwee");
    return 0;
}