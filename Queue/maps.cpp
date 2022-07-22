#include<bits/stdc++.h>
using namespace std;

int main(){
  string str ="abssaaccdee";
  int mx = INT_MIN;

  map<char,int> mp;
  for(int i=0;i<str.size();i++){
    mp[str[i]]++;
  }
  for(auto &it: mp){
    mx = max(mx,it.second);
  }

  cout<<mx;
}