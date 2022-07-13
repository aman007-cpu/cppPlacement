#include<bits/stdc++.h>
using namespace std;

int main(){
 string s = "zzzzz";

  map<char,int> mp;
  for(int i=0;i<s.size();i++){
    mp[s[i]]++;
  }

  int minm = INT_MAX;;
  int flag=0;

  if(mp.size()==1){
    for(auto &i: mp){
        cout<<i.second;
        return 0;
    }
  }
  for(auto &it: mp){
    
    if((it.second)%2==0){

        minm = min(minm,it.second);
    }
    else{
        flag=1;
        break;
    }
  }
  if(flag==0){
  cout<<minm;
  }
  else{
    cout<<1;
  }

}