#include<bits/stdc++.h>

using namespace std;

int main(){
    int nm;
    cin>>nm;
    int hp;
    cin>>hp;
    map<int,int> mp;

for(int i=0;i<nm;i++){
    int mhp,bp;
    cin>>mhp>>bp;
    mp.insert({mhp, bp});
}
int ctr=0;
 for(auto &it: mp){
    if(hp>it.first){
        ctr++;
        hp+=it.second;
    }
 }
cout<<ctr;
}