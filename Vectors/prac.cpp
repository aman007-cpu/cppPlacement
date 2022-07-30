#include<bits/stdc++.h>

using namespace std;

int main(){
   vector<string> str = {"aman","radhe"};

   vector<int> maxb(26,0);
   for(string s: str){
    vector<int> f(26);
    for(char c: s){
        f[c-'a']++;
    }
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }
   } 
   
}