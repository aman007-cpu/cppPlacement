#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        int l,p;
        cin>>l>>p;
        for(int i=0;i<n;i++){
            v[i].first = l- v[i].first;

        }
        sort(v.begin(),v.end());
        int ans=0;
        int curr=0;
        priority_queue<int,vector<int>> pq;
        flag=0;
        for(int i=0;i<n;i++){
            if(curr>=l){
                break;
            }
            while(curr<v[i].first){
                if(pq.empty()){
                 flag=1;
                 break;
                }

                ans++;curr+=pq.top();
                pq.pop();
            }
            if(flag){
                break;
            }
            pq.push(v[i].second);
        }
    }
}