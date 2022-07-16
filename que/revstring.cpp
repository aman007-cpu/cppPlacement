#include<bits/stdc++.h>
using namespace std;

void rev(string &str){
    if(str.size()==0){
        return;
    }

    string ros = str.substr(1);
    rev(ros);
    cout<<str[0];
}

void paii(string &s){
    if(s.size()==0){
        return;
    }
    if(s[0]=='p' && s[0]=='i'){
        cout<<"3.14";
        paii(s.substr(2));
    }
    else{
        cout<<s[0];
        paii(s.substr(1));
    }
}
int main(){
    string str ="aman";
    // reverse(str.begin(),str.end());
    rev(str);

    string s = "pippppccpisspi";
    paii()
}