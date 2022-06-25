#include<iostream>
using namespace std;
void subseq(string s, string ans){
    if(s.size()==0){
        cout<<ans<<endl;
        return;
    }
char ch  = s[0];
int x = ch;
 string ros  = s.substr(1);
 subseq(ros,ans);
 subseq(ros,ch+ans);
 subseq(ros,ans+to_string(x));
}
int main(){
   subseq("AB","");
    return 0;
}