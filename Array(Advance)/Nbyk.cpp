#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int size = n/k;

   map<int,int>mp;
   for(int i=0;i<n;i++){
    mp[v[i]]++;
   }
   vector<int> b;
   for(auto &it: mp){
    if(it.second>size){
        b.push_back(it.first);
    }
   }

   for(auto &k: b){
    cout<<k<<" ";
   }


}