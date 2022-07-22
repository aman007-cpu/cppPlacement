#include<bits/stdc++.h>
using namespace std;

void solve(string str,string output, int index, vector<string>& ans){
  if(index>=str.length()){
    ans.push_back(output);
    return;
  }
  //excludes
  solve(str,output,index+1,ans);
  //include
    char ch = str[index];
    output.push_back(ch);
    solve(str,output,index+1,ans);
}


int main()
{
    string str ="abc";
   vector<string> ans;
    string output = "";
    int index=0;
    solve(str,output,index, ans);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<endl;
    }
}