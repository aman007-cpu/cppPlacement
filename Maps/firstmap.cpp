#include<bits/stdc++.h>
using namespace std;
 
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
 int main(){
   map<int ,string> m;
   m[1] = "abc";
   m[5] = "cdc";
   m[3] = "adc";
   m.insert({4,"dsfds"});
   auto it = m.find(3);
   m.erase(1);
   m.clear(); // clear whole map
  print(m);
    return 0;
 }