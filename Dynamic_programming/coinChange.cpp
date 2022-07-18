#include<bits/stdc++.h>
using namespace std;
const int N=2510;
int func(int amount, vector<int>&v){
    if(amount==0){
        return 0;
    }
    int ans =INT_MIN;

    for(int coin: v){
        if(amount-coin>0){
     ans = min(ans + 0LL,func(amount-coin,v)+1LL);
        }
    }
    return ans;
}
 int coinChange(vector<int>& coins, int amount) {
     int ans = func(amount,coins);
     return ans==INT_MAX? -1: ans;  
    }
int main(){
  vector<int> coins = {1,2,3};
  cout<<coinChange(coins,11); 


}