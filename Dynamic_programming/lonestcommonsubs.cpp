#include<bits/stdc++.h>
using namespace std;
int ctr=0;
const int N = 25e10 +24;
int dp[N];
int subseq(int ar[],int n){
    if(dp[i]!=-1) return dp[n];
     int ans=1; 
     for(int i=0;i<n;i++){
        if(ar[n]>ar[i]){
            ans = max(ans,subseq(ar,i)+1);
        }
     }
     return dp[n]= ans;
}
int main(){
    memset(dp,-1,sizeof(dp));
  int n;
  cin>>n;
  int ar[n];
  for(int i=0;i<n;i++){
    cin>>ar[i];
  }  
  int ans=0;
  for(int i=0;i<n;i++){
    ans = max(ans, subseq(ar,i));
  }
  cout<<ans;
}