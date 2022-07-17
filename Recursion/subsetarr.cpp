#include<bits/stdc++.h>
using namespace std;

void subset(vector<int> v,vector<int> v1, int x){
    if(x>=v.size()){
        for(auto &i: v1){
            cout<<i<<" ";
        }cout<<endl;
        return;
    }
    //nhi lena
  subset(v,v1,x+1);

  //lena vaala case
    v1.push_back(v[x]);
    subset(v,v1,x+1);


}

int main(){
    vector<int> v = {1,2,3};
    vector<int> v1;
    subset(v,v1,0);
}