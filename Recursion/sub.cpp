#include<bits/stdc++.h>
using namespace std;

void printsub(string s,int ind,string ans){
    if(s.size()==ind){
        cout<<ans<<" "<<endl;
        return;
    }
      //nhi lena
      printsub(s,ind+1,ans);
      //lena vali cond
      ans.push_back(s[ind]);
      printsub(s,ind+1,ans);
}

int main(){

    string str ="abc";
     string ans="";
    printsub(str,0,ans);
}