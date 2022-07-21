#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={10,3,8,9,1};

    map<int,int> mp;
    for(int i=0;i<5;i++){
        mp.insert({v[i],i});
    }

    cout<<mp[8];

}