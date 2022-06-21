#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    vector<int> v={1,2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it= v.begin();
    //while
    while(it!=v.end()){
        cout<<(*it);
        ++it;
    }
    //or in for
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    } 
  vector<pair<int,int>> a = {{1,2},{2,3},{3,4},{4,5}};
  vector<pair<int,int>> ::iterator it;
  for(it = a.begin();it!=a.end();++it){
    cout<<(*it).first<<" "<<(*it).second<<endl;
    cout<<(it->first)<<" "<<(it->second)<<endl;
  }
  return 0;
}