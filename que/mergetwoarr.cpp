#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;

  vector<int> v(n);
  vector<int> v1(m);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(int i=0;i<m;i++){
    cin>>v1[i];
  }
   vector<int> vec;

   for(int i=0;i<n;i++){
    vec.push_back(v[i]);
   }

   for(int i=0;i<m;i++){
    vec.push_back(v1[i]);
   }
  
  for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
   }

   

}