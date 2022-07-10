#include<bits/stdc++.h>
using namespace std;

int main(){
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,4)<<endl;

    vector<int> v= {2,4,5};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;});
}