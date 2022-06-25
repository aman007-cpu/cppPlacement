#include<iostream>
using namespace std;
string movex(string s){
    if(s.size()==0){
        return "";
    }

    char ch = s[0];
    string ans = movex(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}
int main(){
   cout<<movex("amanxxdsdxxokxll");
    return 0;
}