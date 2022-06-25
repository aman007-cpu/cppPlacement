#include<iostream>
using namespace std;

void premutation(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){

        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        premutation(ros,ans+ch);
    }

}
int main(){
   premutation("ABC","");
    return 0;
}