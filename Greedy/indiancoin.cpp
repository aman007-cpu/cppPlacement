#include<bits/stdc++.h>
using namespace std;

int main(){

  vector<int> v = {1,2,5,20,50,100,200,500,2000};


    int x;
    cin>>x;
    sort(v.begin(),v.end(),greater<int>());
    int ctr=0;
   for(int i=0;i<v.size()-1;i++){
      ctr += x/v[i];
      x -=(x/v[i] )*v[i];
   }

  
  cout<<ctr;


}