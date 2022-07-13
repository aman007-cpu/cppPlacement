#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
    double v1 = (double)a.first/b.second;
    double v2 = (double)b.first/a.second;
    return v1>v2;
    
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    int w;
    cin>>w;

    sort(v.begin(),v.end(), comp);
   int ans =0;
   for(int i=0;i<n;i++){
    if(w>=v[i].second){
        ans+=v[i].second;
        w-=v[i].second;
    }
    double vw = (double)v[i].first/v[i].second;
    ans+= vw*w;
    w=0;
    break;  
   }


}