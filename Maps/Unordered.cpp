#include<bits/stdc++.h>
using namespace std;
 
void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
 int main(){
   unordered_map<int ,string> m;
   m[1] = "abc";
   m[5] = "cdc";
   m[3] = "adc";
   m.insert({4,"dsfds"});
   // clear whole map
  print(m);
    return 0;
 }