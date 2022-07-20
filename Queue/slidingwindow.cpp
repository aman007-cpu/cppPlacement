#include<bits/stdc++.h>
using namespace std;

//most optimized O(n)
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         deque<int> dq;
        vector<int>  ans;
        
        for(int i=0;i<nums.size();i++){
            if(!dq.empty()&& dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
};

int main(){
    // deque<int> dq;
    // dq.push_back(1);
    // dq.push_back(2);
    // dq.push_front(3);
    // dq.push_front(4);
    // for(auto i: dq){
    //     cout<<i<<" ";
    //     cout<<endl;
    // }

    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i: v){
        cin>>i;
    }

    multiset<int,greater<int>> s;

    vector<int> ans;
    for(int i=0;i<k;i++){
        s.insert(v[i]);
    }
    ans.push_back(*s.begin());

    for(int i=k;i<n;i++){
        s.erase(s.lower_bound([i-x]));
        s.insert(v[i]);
    }
 

  

}