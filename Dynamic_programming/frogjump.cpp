#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
int dp[N];
int k;
int func(int i){
    if(i==0){
      return 0;
    }
    if(dp[i]!=-1) return dp[i];
     int cost = INT_MAX;
    // cost = min(cost,func(i-1) + abs(h[i]-h[i-1]));
    // //way 2
    // if(i>2){
    // cost = min(cost,func(i-2) + abs(h[i]-h[i-2]));
    // }
      for(int x=1;x<=k;x++){
       if(i-x>=0){
     cost = min(cost,func(i-x)+ abs(h[i]-h[i-x]));
       }
      }

    return dp[i] = cost; 
  
}

int main(){
    memset(dp,-1,sizeof(dp));
 int n;
 cin>>n>>k;
 for(int i=0;i<n;i++){
    cin>>h[i];
 }
 cout<<func(n-1);
}