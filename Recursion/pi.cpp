#include<iostream>
using namespace std;
void removepi(string s){
    if(s.size()==0){
        return;
    }
    if(s[0]=='p'&& s[1]=='i'){
        cout<<3.14;
        removepi(s.substr(2));
    }
    else{
        cout<<s[0];
        removepi(s.substr(1));
    }

}

int main(){
  removepi("piamandspikainturapi");
    return 0;
}