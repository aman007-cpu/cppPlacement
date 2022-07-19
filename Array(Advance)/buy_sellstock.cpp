#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int sum=0;
    int it=0;

    int first =v[0];
    
    for(int i=1;i<n;i++){
    
        if(first>v[i]){
           sum += v[i-1]-first;
           it=i;
           break;
        }
    }
  int mx=0;
    for(int i=it+1;i<n;i++){
      mx = max(mx,v[i]);
    }

    sum+=mx-v[it];

    cout<<sum;

    



}