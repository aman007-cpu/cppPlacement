#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subset;
void gen(vector<int> &v,int i,vector<int> &nums){

    //ith not in subset
    if(i==nums.size()){
      subset.push_back(v);
      return ;
    }
    gen(v,i+1,nums);
    //ith in subset
    v.push_back(nums[i]);
    gen(v,i+1,nums);
    v.pop_back();
}
int main(){
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
vector<int> empty;
gen(empty,0,nums);
for(auto sub: subset){
    for(auto ele: subset){
        cout<<ele<<" ";
    }
    cout<<endl;
}


}