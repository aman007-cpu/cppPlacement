#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> ch(n);

    for(auto &d: ch){
        cin>>d;
    }

    for(auto &i: ch){
        cout<<i<<" ";
    }
}