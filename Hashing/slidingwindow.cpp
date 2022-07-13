#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int curr=0,ans=INT_MAX;
    for(int i=0;i<n;i++){
        curr+=v[i];
    }
    ans = min(ans,curr);
    for(int i=1;i<n-k+1;i++){
        curr-=v[i-1];
        curr+=v[i+k-1];
        ans = min(ans,curr);
    }
}