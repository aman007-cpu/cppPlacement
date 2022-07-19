#include<bits/stdc++.h>
using namespace std;

void printsub(string str,string ans){
    if(str.empty()){
        cout<<ans<<endl;
      return;
    }
 
     printsub(str.substr(1),ans + str[0]);
     printsub(str.substr(1),ans);

}

int main(){
    string str="abc";
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
    string ans="";

    printsub(str,ans);
}