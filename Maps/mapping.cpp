#include<iostream>
#include <map>
using namespace std;

int main(){
 map<int ,string> mp;
 mp[1] = "2";
 mp[5] = "1";
 mp[3] = "3";
 mp[9] = "nibbi";
 mp.insert({4,"4"});
 map<int,int>m;
 m.insert({9,10});
 for(auto &i: mp){
    cout<<i.first<<" "<<i.second<<endl;
 }

    return 0;
}