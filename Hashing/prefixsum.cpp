#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int prefixsum = 0;
   map<int,int> mp;
   for(int i=0;i<n;i++){
    prefixsum+= v[i];
    mp[prefixsum]++;

   }

   int ans=0;
   for(auto &it: mp){
    int c = it.second;
    ans+=c*(c-1)/2;
    if(it.first==0){
        ans+=it.second;
    }
   }
   cout<<ans;
}