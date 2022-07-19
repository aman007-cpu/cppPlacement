#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int func(vector<int> &v, int n){
    if(n<=0){
        return 0;
    }
    if(dp[n-1]!=-1) return dp[n-1];
  int op1 = v[n-1] + func(v,n-2);
  int op2 = func(v,n-1);

  return  dp[n-1] = max(op1,op2);


}

int main(){
    memset(dp,-1,sizeof(dp));
 int n;
 cin>>n;
 vector<int> v(n);

 for(int i=0;i<n;i++){
    cin>>v[i];
 }

 cout<<"total sum: "<<func(v,n);

}